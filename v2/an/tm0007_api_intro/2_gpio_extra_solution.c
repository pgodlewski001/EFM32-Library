/******************************************************************************
 * @file
 * @brief 
 * @author Silicon Labs
 * @version 1.01
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
#include "em_gpio.h"
#include "em_chip.h"

// Uncomment the following lines for STK3700
#define LED_PORT 	gpioPortE
#define LED_PIN  	2
#define PB0_PORT 	gpioPortB
#define PB0_PIN 	9

// Uncomment the following lines for STK3300
// #define LED_PORT 	gpioPortD
// #define LED_PIN  	7
// #define PB0_PORT 	gpioPortD
// #define PB0_PIN 	8

// Uncomment the following lines for STKG8XX
// #define LED_PORT 	gpioPortC
// #define LED_PIN  	0
// #define PB0_PORT 	gpioPortB
// #define PB0_PIN		9



void delay(uint16_t ms)
{
  /* Clear TIMER0 counter value */
  TIMER0->CNT = 0;

  /* Start TIMER0 */
  TIMER0->CMD = TIMER_CMD_START;

  /* Wait until counter value is over the threshold */
  while(TIMER0->CNT < ms * TIMER_FREQ / 1000){
   /* Do nothing, just wait */
  }

  /* Stop TIMER0 */
  TIMER0->CMD = TIMER_CMD_STOP;
}


void initTimer(void)
{
  /* Enable clock for TIMER0 */
  CMU->HFPERCLKEN0 |= CMU_HFPERCLKEN0_TIMER0;

  /* Set prescaler to 1024 */
  TIMER0->CTRL = (TIMER0->CTRL & ~_TIMER_CTRL_PRESC_MASK) |  TIMER_CTRL_PRESC_DIV1024;
}

int main(void)
{
  /* Initialize chip */
  CHIP_Init();

  /* Enable clock for GPIO */
  CMU_ClockEnable(cmuClock_GPIO, true);

  /* Configure LED pin as push/pull output */
  GPIO_PinModeSet(LED_PORT,         /* Port */
                  LED_PIN,          /* Pin */
                  gpioModePushPull, /* Mode */
                  0 );              /* Output value */

  /* Configure button pin as input */
  GPIO_PinModeSet(PB0_PORT,         /* Port */
                  PB0_PIN,          /* Pin */
                  gpioModeInput,    /* Mode */
                  0 );              /* No filter */


  while ( 1 ) {

	/* Wait 50ms */
    delay(50);

    /* Toggle LED */
    GPIO_PinOutToggle(LED_PORT, LED_PIN);
  }

}
