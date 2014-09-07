/**************************************************************************//**
 * @file window_manager.c
 * @brief EmWin Window Manager Example
 * @author Silicon Labs
 * @version 1.06
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

#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include "GUI.h"
#include "em_device.h"
#include "em_chip.h"
#include "em_cmu.h"
#include "tftdirect.h"
#include "bsp.h"
#include "bsp_trace.h"
#include "GUI.h"
#include "WM.h"
#include "display_conf.h"


#define MSG_CHANGE_COUNTER_TEXT (WM_USER + 0)

/* Handle to window1 */
WM_HWIN hWindow1;

/* Counter variables */
static char counterText[40];
int counterValue = 0;


/*********************************************************************
* Configure the Direct Drive Controller
**********************************************************************
*/ 
static const EBI_TFTInit_TypeDef tftInit =
{ 
  ebiTFTBank2,                  /* Select EBI Bank 2 */
  ebiTFTWidthHalfWord,          /* Select 2-byte (16-bit RGB565) increments */
  ebiTFTColorSrcMem,            /* Use memory as source for mask/blending */
  ebiTFTInterleaveUnlimited,    /* Unlimited interleaved accesses */
  ebiTFTFrameBufTriggerVSync,   /* VSYNC as frame buffer update trigger */
  false,                        /* Drive DCLK from negative edge of internal clock */
  ebiTFTMBDisabled,             /* No masking and alpha blending enabled */
  ebiTFTDDModeExternal,         /* Drive from external memory */
  ebiActiveLow,                 /* CS Active Low polarity */
  ebiActiveHigh,                /* DCLK Active High polarity */
  ebiActiveLow,                 /* DATAEN Active Low polarity */
  ebiActiveLow,                 /* HSYNC Active Low polarity */
  ebiActiveLow,                 /* VSYNC Active Low polarity */
  320,                          /* Horizontal size in pixels */
  1,                            /* Horizontal Front Porch */
  30,                           /* Horizontal Back Porch */
  2,                            /* Horizontal Synchronization Pulse Width */
  240,                          /* Vertical size in pixels */
  1,                            /* Vertical Front Porch */
  4,                            /* Vertical Back Porch */
  2,                            /* Vertical Synchronization Pulse Width */
  0x0000,                       /* Frame Address pointer offset to EBI memory base */
  8,                            /* DCLK Period */
  0,                            /* DCLK Start cycles */
  0,                            /* DCLK Setup cycles */
  0,                            /* DCLK Hold cycles */
};


/** Enables the VSYNC interrupt generated by Direct Drive */
void enableVsyncInterrupt(void) {
  
  /* Disable all EBI interrupts */
  EBI_IntDisable(_EBI_IF_MASK);

  /* Clear previous interrupts */
  EBI_IntClear(_EBI_IF_MASK);

  /* Enable VSYNC interrupt */
  EBI_IntEnable(EBI_IF_VSYNC);

  /* Enable EBI interrupts in core */
  NVIC_ClearPendingIRQ(EBI_IRQn);
  NVIC_EnableIRQ(EBI_IRQn);
  
}

/** Initialize Direct Drive. This function is called from emWin during initialization. */
void initDisplayController(void) 
{
  /* Set up Direct Drive and configure display controller */
  TFT_DirectInit(&tftInit);
  
  /* Enable the interrupt on VSYNC, generated from Direct Drive */
  enableVsyncInterrupt();
}


/** Initialize clock settings */
void initClocks(void) 
{
  /* Configure for 48MHz HFXO operation of core clock */
  CMU_ClockSelectSet(cmuClock_HF, cmuSelect_HFXO); 

  /* Enable SysTick interrupt, used by GUI software timer */
  if (SysTick_Config(CMU_ClockFreqGet(cmuClock_CORE) / 1000))  while (1);
}


/** Increase a counter by one and display the new value */
void increaseCounter(void) 
{
  /* Increase counter and write result to a string */
  char newCounterString[40];
  counterValue++;
  sprintf(newCounterString, "Counter: %d", counterValue);
  
  /* Send a message to the window to set the new value */
  WM_MESSAGE Message;
  Message.MsgId  = MSG_CHANGE_COUNTER_TEXT;
  Message.Data.p = newCounterString;
  WM_SendMessage(hWindow1, &Message);
  
  /* Invalidate the window, will cause a redraw */
  WM_InvalidateWindow(hWindow1);
}


/** Callback function for emWin background. Handles drawing of the background. */
void callbackBackground(WM_MESSAGE* pMsg) 
{
  switch (pMsg->MsgId) {
 
  /* Repaint the background */
  case WM_PAINT:
    /* Redraw background color */
    GUI_SetBkColor(GUI_DARKRED);
    GUI_Clear();
    
    /* Write some text on the background */
    GUI_SetColor(GUI_WHITE);
    GUI_SetFont(&GUI_Font24_ASCII);
    GUI_DispStringHCenterAt("Background Window", 160, 5);
    break;
    
  /* Default message handler */
  default:
    WM_DefaultProc(pMsg);
  }
}

/** Callback function for emWin window. Handles drawing of the window. */
void callbackWindow1(WM_MESSAGE* pMsg) 
{
  GUI_RECT Rect;
  int x, y;
  switch (pMsg->MsgId) {
    
  /* Change the counter text */  
  case MSG_CHANGE_COUNTER_TEXT:
    strcpy(counterText, pMsg->Data.p);  
    break;
    
  /* Repaint the window */
  case WM_PAINT:
    
    /* Get the window dimensions */
    WM_GetInsideRect(&Rect);
    
    /* Set background and border colors */
    GUI_SetBkColor(GUI_DARKBLUE);
    GUI_SetColor(GUI_BLACK);
    
    /* Redraw background and border */
    GUI_ClearRectEx(&Rect);
    GUI_DrawRectEx(&Rect);
    
    /* Write window name */
    GUI_SetColor(GUI_WHITE);
    GUI_SetFont(&GUI_Font24_ASCII);
    x = WM_GetWindowSizeX(pMsg->hWin);
    y = WM_GetWindowSizeY(pMsg->hWin);
    GUI_DispStringHCenterAt("Window 1", x / 2, (y / 2) - 24);

    /* Write counter value */
    GUI_SetFont(&GUI_Font16_ASCII);    
    GUI_DispStringHCenterAt(counterText, x / 2, (y / 2) + 12);
    
    break;
    
  /* Default message handler */
  default:
    WM_DefaultProc(pMsg);
  }
}


/* Start the window manager. This function never returns */
void startWindowManager(void) 
{
  /* Enable multiple buffering support in the window manager */  
  WM_MULTIBUF_Enable(1);

  /* Set callback for background window */
  WM_SetCallback(WM_HBKWIN, callbackBackground);
  
  /* Create a new window */
  hWindow1 = WM_CreateWindow( 50,  70, 165, 100, WM_CF_SHOW, callbackWindow1, 0);
  
  /* Program loop */
  while(1) {
    
    /* Some program logic. In this example, we simply increase a counter */
    increaseCounter();
    
    /* 
     * Call GUI_Delay(). If a window needs to be redrawn callbacks will be sent
     * from this function. Goes to sleep when nothing more needs
     * to be done */
    GUI_Delay(1000);   
  }
}


void MainTask(void);


/**************************************************************************//**
 * @brief  Main function
 *****************************************************************************/
int main(void)
{
  /* Chip errata */
  CHIP_Init();
  
  /* Select clock source  */
  initClocks();
  
  /* Initialize EBI configuration for external RAM and display controller */
  BSP_Init(BSP_INIT_DK_EBI);
  
  /* Initialize emWin Library. Will call initDisplayController() to initialize Direct Drive. */
  GUI_Init();
  
  /* Start window manager */
  startWindowManager();
  
  return 0;
}
