/*****************************************************************************
 * @file main_gpio_int_dvk.c
 * @brief GPIO Demo Application
 * @author Silicon Labs
 * @version 1.07
 ******************************************************************************
 * @section License
 * <b>(C) Copyright 2014 Silicon Labs, http://www.silabs.com</b>
 *******************************************************************************
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software.
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 * 3. This notice may not be removed or altered from any source distribution.
 *
 * DISCLAIMER OF WARRANTY/LIMITATION OF REMEDIES: Silicon Labs has no
 * obligation to support this Software. Silicon Labs is providing the
 * Software "AS IS", with no express or implied warranties of any kind,
 * including, but not limited to, any implied warranties of merchantability
 * or fitness for any particular purpose or warranties against infringement
 * of any proprietary rights of a third party.
 *
 * Silicon Labs will not be liable for any consequential, incidental, or
 * special damages, or any other relief, or for any claim by any third party,
 * arising from your use of this Software.
 *
 ******************************************************************************/

#include "em_device.h"
#include "em_cmu.h"
#include "em_emu.h"
#include "em_gpio.h"
#include "em_chip.h"

/**************************************************************************//**
 * @brief GPIO_ODD_IRQHandler
 * Interrupt Service Routine Odd GPIO Interrupt Line
 *****************************************************************************/
void GPIO_ODD_IRQHandler(void)
{ 
  /* clear flag for PE1 interrupt */
  GPIO_IntClear(0x0002);
}

/**************************************************************************//**
 * @brief  Main function
 * Main is called from __iar_program_start, see assembly startup file
 *****************************************************************************/
int main(void)
{  
  /* Initialize chip */
  CHIP_Init();
  
  /* Enable clock for GPIO module */
  CMU_ClockEnable(cmuClock_GPIO, true);

  /* Configure PE1 as input with filter enable */
  GPIO_PinModeSet(gpioPortE, 1, gpioModeInputPullFilter, 1);
 
  /* Enable GPIO_ODD interrupt vector in NVIC */
  NVIC_EnableIRQ(GPIO_ODD_IRQn);
  
  /* Configure PE1 interrupt on falling edge */
  GPIO_IntConfig(gpioPortE, 1, false, true, true);
  
  while(1)
  {
    EMU_EnterEM3(false);
    
    /* Wake up from interrupt and continue on run mode */
    /* while PE1 is grounded */
    while(!GPIO_PinInGet(gpioPortE,1));
  }
}

