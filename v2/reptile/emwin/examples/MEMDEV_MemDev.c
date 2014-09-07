/*********************************************************************
*                SEGGER Microcontroller GmbH & Co. KG                *
*        Solutions for real time microcontroller applications        *
**********************************************************************
*                                                                    *
*        (c) 1996 - 2012  SEGGER Microcontroller GmbH & Co. KG       *
*                                                                    *
*        Internet: www.segger.com    Support:  support@segger.com    *
*                                                                    *
**********************************************************************

** emWin V5.14 - Graphical user interface for embedded applications **
All  Intellectual Property rights  in the Software belongs to  SEGGER.
emWin is protected by  international copyright laws.  Knowledge of the
source code may not be used to write a similar product.  This file may
only be used in accordance with the following terms:

The software has been licensed to Energy Micro AS whose registered office
is situated at  Sandakerveien 118, N-0484 Oslo, NORWAY solely
for  the  purposes  of  creating  libraries  for Energy Micros ARM Cortex-M3, M4F
processor-based  devices,  sublicensed  and distributed  under the terms and
conditions  of  the   End  User  License Agreement supplied by Energy Micro AS. 
Full source code is available at: www.segger.com

We appreciate your understanding and fairness.
----------------------------------------------------------------------
File        : MEMDEV_MemDev.c
Purpose     : Simple demo shows the use of memory devices
----------------------------------------------------------------------
*/

#include "GUI.h"

/*******************************************************************
*
*       static variables
*
********************************************************************
*/

static GUI_RECT Rect = {0, 130, 100, 180};

/*******************************************************************
*
*       static code
*
********************************************************************
*/

/*******************************************************************
*
*       _Draw
*/
static void _Draw(int Delay) {
  GUI_SetPenSize(5);
  GUI_SetColor(GUI_RED);
  GUI_DrawLine(Rect.x0 + 3, Rect.y0 + 3, Rect.x1 - 3, Rect.y1 - 3);
  GUI_Delay(Delay);
  GUI_SetColor(GUI_GREEN);
  GUI_DrawLine(Rect.x0 + 3, Rect.y1 - 3, Rect.x1 - 3, Rect.y0 + 3);
  GUI_Delay(Delay);
  GUI_SetColor(GUI_WHITE);
  GUI_SetFont(&GUI_FontComic24B_ASCII);
  GUI_SetTextMode(GUI_TM_TRANS);
  GUI_DispStringInRect("Closed", &Rect, GUI_TA_HCENTER | GUI_TA_VCENTER);
  GUI_Delay(Delay);
}

/*******************************************************************
*
*       _DemoMemDev
*/
static void _DemoMemDev(void) {
  GUI_MEMDEV_Handle hMem;
  int i;
  GUI_SetBkColor(GUI_BLACK);
  GUI_Clear();
  GUI_SetColor(GUI_WHITE);
  GUI_SetFont(&GUI_Font24_ASCII);
  GUI_DispStringHCenterAt("MEMDEV_MemDev - Sample", 160, 5);
  GUI_SetFont(&GUI_Font8x16);
  GUI_DispStringHCenterAt("Shows the advantage of using a\nmemorydevice", 160,50);
  GUI_SetFont(&GUI_Font8_1);
  GUI_DispStringHCenterAt("Draws the picture\nwithout a\nmemory device", 50, 90);
  GUI_DispStringHCenterAt("Draws the picture\nusing a\nmemory device", 270, 90);
  /* Create the memory device */
  hMem = GUI_MEMDEV_Create(Rect.x0, Rect.y0, Rect.x1 - Rect.x0, Rect.y1 - Rect.y0);
  /* Routes the drawing operations to the memory device */
  GUI_MEMDEV_Select(hMem);
  _Draw(0);
  /* Routes the drawing operations to the LCD */
  GUI_MEMDEV_Select(0);
  while (1) {
    for (i = 0; i < 3; i++) {
      GUI_Delay(250);
      GUI_ClearRect(LCD_GetXSize() - Rect.x1, Rect.y0, LCD_GetXSize(), Rect.y1);
      GUI_Delay(250);
      GUI_MEMDEV_CopyToLCDAt(hMem, LCD_GetXSize() - Rect.x1, Rect.y0);
    }
    GUI_Delay(500);  
    /* Uses no memory device */
    _Draw(400);
    GUI_Delay(400);
    GUI_ClearRect(0, 130, 319, 219);
  }
  GUI_MEMDEV_Delete(hMem); /* Destroy memory device */
}

/*********************************************************************
*
*       Public code
*
**********************************************************************
*/
/*********************************************************************
*
*       MainTask
*/
void MainTask(void) {
  GUI_Init();
  _DemoMemDev();
}

/*************************** End of file ****************************/

