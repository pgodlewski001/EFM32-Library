/***************************************************************************//**
 * @file
 * @brief uC/OS-II example - Board Support Package (BSP)
 * @version 3.20.5
 *******************************************************************************
 * @section License
 * <b>(C) Copyright 2014 Silicon Labs, http://www.silabs.com</b>
 *******************************************************************************
 *
 * This file is licensed under the Silabs License Agreement. See the file
 * "Silabs_License_Agreement.txt" for details. Before using this software for
 * any purpose, you must agree to the terms of that agreement.
 *
 ******************************************************************************/

#include <includes.h>


/***************************************************************************//**
 *                                BSPOS_Init()
 * @brief      Board Support Package Initialization.
 *
 * @param[in]  none
 * @exception  none
 * @return     none
 *
 ******************************************************************************/
void  BSPOS_Init (void)
{
  BSP_Init(BSP_INIT_DEFAULT);
  BSP_LedsSet( 0 );

  /* Set external crystal oscillator */
  CMU_ClockSelectSet(cmuClock_HF, cmuSelect_HFXO);

  /* Enable module clocks */
  CMU_ClockEnable(cmuClock_GPIO, true);
  CMU_ClockEnable(cmuClock_HFPER, true);
}
