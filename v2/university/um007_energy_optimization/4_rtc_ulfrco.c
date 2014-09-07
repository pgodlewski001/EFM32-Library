/**************************************************************************//**
 * @file
 * @brief ADC sampling using RTC, Interrupts and ULFRCO
 * @author Energy Micro AS
 * @version 1.0.0
 ******************************************************************************
 * @section License
 * <b>(C) Copyright 2014 Silicon Labs, http://www.silabs.com</b>
 *******************************************************************************
 *
 * This file is licensed under the Silicon Labs Software License Agreement. See 
 * "http://developer.silabs.com/legal/version/v11/Silicon_Labs_Software_License_Agreement.txt"  
 * for details. Before using this software for any purpose, you must agree to the 
 * terms of that agreement.
 *
 ******************************************************************************/

#include <stdlib.h>
#include <stdio.h>
#include "efm32.h"
#include "em_chip.h"
#include "em_emu.h"
#include "em_cmu.h"
#include "em_adc.h"
#include "em_rtc.h"

/* Support functions */
#include "support.h"

/* Uncomment to use Fahrenheit instead of Celsius */
/* #define FAHRENHEIT */


/**************************************************************************//**
 * @brief ADC0 interrupt handler. Simply clears interrupt flag.
 *****************************************************************************/
void ADC0_IRQHandler(void)
{
  ADC_IntClear(ADC0, ADC_IF_SINGLE);
}

/**************************************************************************//**
 * @brief Configure ADC
 *****************************************************************************/
static void ADCConfig(void)
{
  CMU_ClockEnable(cmuClock_ADC0, true);

  ADC_Init_TypeDef       init       = ADC_INIT_DEFAULT;
  ADC_InitSingle_TypeDef singleInit = ADC_INITSINGLE_DEFAULT;

  init.timebase = ADC_TimebaseCalc(0);
  init.prescale = ADC_PrescaleCalc(7000000, 0);

  ADC_Init(ADC0, &init);

  /* Init for single conversion use, measure internal temperature. */
  singleInit.reference  = adcRef1V25;
  singleInit.input      = adcSingleInpTemp;
  singleInit.resolution = adcRes12Bit;
  singleInit.acqTime    = adcAcqTime32;

  ADC_InitSingle(ADC0, &singleInit);

  /* Setup interrupt generation on completed conversion. */
  ADC_IntEnable(ADC0, ADC_IF_SINGLE);
  NVIC_EnableIRQ(ADC0_IRQn);
}

/**************************************************************************//**
 * @brief RTC interrupt handler. Simply clears interrupt flag.
 *****************************************************************************/
void RTC_IRQHandler(void)
{
  /* Clear interrupt source */
  RTC_IntClear(RTC_IFC_COMP0);
}

/**************************************************************************//**
 * @brief Configure RTC
 *****************************************************************************/
void rtc_setup(void)
{
  CMU_ClockEnable(cmuClock_CORELE, true);
  CMU_ClockSelectSet(cmuClock_LFA, cmuSelect_LFRCO);

  CMU_ClockEnable(cmuClock_RTC, true);

  /* Enabling clock to the interface of the low energy modules */
  CMU_ClockEnable(cmuClock_CORELE, true);

  CMU->LFCLKSEL = CMU_LFCLKSEL_LFA_DISABLED
                  | CMU_LFCLKSEL_LFB_DEFAULT
                  | CMU_LFCLKSEL_LFAE_ULFRCO
                  | CMU_LFCLKSEL_LFBE_DEFAULT;

  const RTC_Init_TypeDef rtcInit =
  {
    .enable   = true,
    .debugRun = false,
    .comp0Top = true,
  };

  RTC_Init(&rtcInit);

  /* Prescale the clock by 1024 */
  CMU_ClockDivSet(cmuClock_RTC, cmuClkDiv_1024);

  /* Set compare value to 0, to overflow about once every second */
  RTC_CompareSet(0, 0);

  /* Enable interrupt for compare register 0 */
  RTC_IntEnable(RTC_IFC_COMP0);

  /* Enabling interrupt from RTC */
  NVIC_EnableIRQ(RTC_IRQn);
}

/**************************************************************************//**
 * @brief SWO Setup
 * Enables code view in energyAware Profiler
 *****************************************************************************/
void setupSWO(void)
{
  uint32_t *dwt_ctrl = (uint32_t *) 0xE0001000;
  uint32_t *tpiu_prescaler = (uint32_t *) 0xE0040010;
  uint32_t *tpiu_protocol = (uint32_t *) 0xE00400F0;

  CMU->HFPERCLKEN0 |= CMU_HFPERCLKEN0_GPIO;
  /* Enable Serial wire output pin */
  GPIO->ROUTE |= GPIO_ROUTE_SWOPEN;
#if defined(_EFM32_GIANT_FAMILY)
  /* Set location 0 */
  GPIO->ROUTE = (GPIO->ROUTE & ~(_GPIO_ROUTE_SWLOCATION_MASK)) | GPIO_ROUTE_SWLOCATION_LOC0;

  /* Enable output on pin - GPIO Port F, Pin 2 */
  GPIO->P[5].MODEL &= ~(_GPIO_P_MODEL_MODE2_MASK);
  GPIO->P[5].MODEL |= GPIO_P_MODEL_MODE2_PUSHPULL;
#else
  /* Set location 1 */
  GPIO->ROUTE = (GPIO->ROUTE & ~(_GPIO_ROUTE_SWLOCATION_MASK)) | GPIO_ROUTE_SWLOCATION_LOC1;
  /* Enable output on pin */
  GPIO->P[2].MODEH &= ~(_GPIO_P_MODEH_MODE15_MASK);
  GPIO->P[2].MODEH |= GPIO_P_MODEH_MODE15_PUSHPULL;
#endif
  /* Enable debug clock AUXHFRCO */
  CMU->OSCENCMD = CMU_OSCENCMD_AUXHFRCOEN;

  while(!(CMU->STATUS & CMU_STATUS_AUXHFRCORDY));

  /* Enable trace in core debug */
  CoreDebug->DHCSR |= 1;
  CoreDebug->DEMCR |= CoreDebug_DEMCR_TRCENA_Msk;

  /* Enable PC and IRQ sampling output */
  *dwt_ctrl = 0x400113FF;
  /* Set TPIU prescaler to 16. */
  *tpiu_prescaler = 0xf;
  /* Set protocol to NRZ */
  *tpiu_protocol = 2;
  /* Unlock ITM and output data */
  ITM->LAR = 0xC5ACCE55;
  ITM->TCR = 0x10009;
}


/**************************************************************************//**
 * @brief  Main function
 *****************************************************************************/
int main(void)
{
  char string[8];

  /* Initialize chip */
  CHIP_Init();
  
  /* Enable code view */
  setupSWO();

  /* Enable clocks required */
  CMU_ClockEnable(cmuClock_HFPER, true);

  /* Configure ADC and Timer */
  ADCConfig();
  rtc_setup();

  /* Stay in this loop forever at end of program */
  while (1)
  {
    ADC_Start(ADC0, adcStartSingle);

    /* Wait while conversion is active */
    EMU_EnterEM1();

#if defined(_EFM32_GIANT_FAMILY)
  uint32_t temp = ADC_DataSingleGet(ADC0) + 112;
#else
  uint32_t temp = ADC_DataSingleGet(ADC0);
#endif

    /* Caclulate temperature in Celsius or Fahrenheit */
#ifndef FAHRENHEIT
    int i = (int)(convertToCelsius(temp) * 10);
    snprintf(string, 8, "%2d,%1d%%C", (i / 10), abs(i) % 10);
#else
    int i = (int)(convertToFahrenheit(temp) * 10);
    snprintf(string, 8, "%2d,%1d%%F", (i / 10), abs(i) % 10);
#endif

    /* We do not need to restore any special oscillators or clocks */
    EMU_EnterEM3(false);
  }
}
