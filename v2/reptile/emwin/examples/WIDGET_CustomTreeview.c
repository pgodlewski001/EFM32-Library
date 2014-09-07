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
File        : WIDGET_CustomTreeview.c
Purpose     : Demonstrates using the TREEVIEW widget
----------------------------------------------------------------------
*/

#include "DIALOG.h"

/*********************************************************************
*
*       Defines
*
**********************************************************************
*/
#define NUM_CHILD_NODES 4
#define NUM_CHILD_ITEMS 4
#define TREEVIEW_DEPTH  4

#define USER_GREEN 0x3ACB90

/*********************************************************************
*
*       Static data
*
**********************************************************************
*/
/*********************************************************************
*
*       bmOpen
*/
static GUI_COLOR ColorsOpen[] = {
     0x0000FF, 0x000000, USER_GREEN
};

static GUI_CONST_STORAGE GUI_LOGPALETTE PalOpen = {
  3,	/* number of entries */
  1, 	/* Has transparency */
  &ColorsOpen[0]
};

static GUI_CONST_STORAGE unsigned char acOpen[] = {
  0x01, 0x55, 0x50, 0x00,
  0x01, 0xAA, 0x90, 0x00,
  0x05, 0xAA, 0x95, 0x54,
  0x06, 0xAA, 0xAA, 0xA4,
  0x55, 0x55, 0x55, 0xA4,
  0x6A, 0xAA, 0xAA, 0x64,
  0x6A, 0xAA, 0xAA, 0x64,
  0x1A, 0xAA, 0xAA, 0x94,
  0x1A, 0xAA, 0xAA, 0x94,
  0x06, 0xAA, 0xAA, 0xA4,
  0x05, 0x55, 0x55, 0x54,
  0x00, 0x00, 0x00, 0x00
};

GUI_CONST_STORAGE GUI_BITMAP bmOpen = {
  16, /* XSize */
  12, /* YSize */
  4, /* BytesPerLine */
  2, /* BitsPerPixel */
  acOpen,  /* Pointer to picture data (indices) */
  &PalOpen   /* Pointer to palette */
};

/*********************************************************************
*
*       bmLeaf
*/
static GUI_COLOR ColorsLeaf[] = {
     0x0000FF, USER_GREEN, 0x000000
};

static GUI_CONST_STORAGE GUI_LOGPALETTE PalLeaf = {
  3,	/* number of entries */
  1, 	/* Has transparency */
  &ColorsLeaf[0]
};

static GUI_CONST_STORAGE unsigned char acLeaf[] = {
  0x0A, 0xAA, 0xA8, 0x00,
  0x09, 0x55, 0x5A, 0x00,
  0x09, 0x55, 0x59, 0x80,
  0x09, 0xAA, 0x9A, 0x80,
  0x09, 0x55, 0x55, 0x80,
  0x09, 0xAA, 0xA9, 0x80,
  0x09, 0x55, 0x55, 0x80,
  0x09, 0xAA, 0xA9, 0x80,
  0x09, 0x55, 0x55, 0x80,
  0x09, 0xAA, 0xA9, 0x80,
  0x09, 0x55, 0x55, 0x80,
  0x09, 0xAA, 0xA9, 0x80,
  0x09, 0x55, 0x55, 0x80,
  0x0A, 0xAA, 0xAA, 0x80,
  0x00, 0x00, 0x00, 0x00
};

GUI_CONST_STORAGE GUI_BITMAP bmLeaf = {
  14, /* XSize */
  15, /* YSize */
  4, /* BytesPerLine */
  2, /* BitsPerPixel */
  acLeaf,  /* Pointer to picture data (indices) */
  &PalLeaf   /* Pointer to palette */
};

/*********************************************************************
*
*       bmClosed
*/
static GUI_COLOR ColorsClosed[] = {
     0x0000FF, USER_GREEN, 0x000000
};

static GUI_CONST_STORAGE GUI_LOGPALETTE PalClosed = {
  3,	/* number of entries */
  1, 	/* Has transparency */
  &ColorsClosed[0]
};

static GUI_CONST_STORAGE unsigned char acClosed[] = {
  0x02, 0xAA, 0xA0, 0x00,
  0x02, 0x55, 0x60, 0x00,
  0x0A, 0xAA, 0xAA, 0xA8,
  0x09, 0x55, 0x55, 0x58,
  0x09, 0x55, 0x55, 0x58,
  0x09, 0x55, 0x55, 0x58,
  0x09, 0x55, 0x55, 0x58,
  0x09, 0x55, 0x55, 0x58,
  0x09, 0x55, 0x55, 0x58,
  0x09, 0x55, 0x55, 0x58,
  0x0A, 0xAA, 0xAA, 0xA8,
  0x00, 0x00, 0x00, 0x00
};

GUI_CONST_STORAGE GUI_BITMAP bmClosed = {
  16, /* XSize */
  12, /* YSize */
  4, /* BytesPerLine */
  2, /* BitsPerPixel */
  acClosed,  /* Pointer to picture data (indices) */
  &PalClosed   /* Pointer to palette */
};

/*********************************************************************
*
*       bmPlus
*/
static GUI_CONST_STORAGE GUI_COLOR ColorsbmPlus[] = {
     0xFFFFFF, USER_GREEN, 0x000000
};

static GUI_CONST_STORAGE GUI_LOGPALETTE PalbmPlus = {
  3,	/* number of entries */
  1, 	/* Has transparency */
  &ColorsbmPlus[0]
};

static GUI_CONST_STORAGE unsigned char acbmPlus[] = {
  0x55, 0x50, 0x00, 0x00,
  0x55, 0x94, 0x00, 0x00,
  0x55, 0x95, 0x00, 0x00,
  0x55, 0x95, 0x40, 0x00,
  0x6A, 0xAA, 0x50, 0x00,
  0x55, 0x95, 0x54, 0x00,
  0x55, 0x95, 0x55, 0x00,
  0x55, 0x95, 0x55, 0x40,
  0x55, 0x55, 0x55, 0x50,
};

GUI_CONST_STORAGE GUI_BITMAP bmPlus = {
  15, /* XSize */
  9, /* YSize */
  4, /* BytesPerLine */
  2, /* BitsPerPixel */
  acbmPlus,  /* Pointer to picture data (indices) */
  &PalbmPlus  /* Pointer to palette */
};

/*********************************************************************
*
*       bmMinus
*/
static GUI_CONST_STORAGE GUI_COLOR ColorsbmMinus[] = {
     0xFFFFFF, USER_GREEN, 0x000000
};

static GUI_CONST_STORAGE GUI_LOGPALETTE PalbmMinus = {
  3,	/* number of entries */
  1, 	/* Has transparency */
  &ColorsbmMinus[0]
};

static GUI_CONST_STORAGE unsigned char acbmMinus[] = {
  0x55, 0x50, 0x00, 0x00,
  0x55, 0x54, 0x00, 0x00,
  0x55, 0x55, 0x00, 0x00,
  0x55, 0x55, 0x40, 0x00,
  0x6A, 0xAA, 0x50, 0x00,
  0x55, 0x55, 0x54, 0x00,
  0x55, 0x55, 0x55, 0x00,
  0x55, 0x55, 0x55, 0x40,
  0x55, 0x55, 0x55, 0x50,
};

GUI_CONST_STORAGE GUI_BITMAP bmMinus = {
  15, /* XSize */
  9, /* YSize */
  4, /* BytesPerLine */
  2, /* BitsPerPixel */
  acbmMinus,  /* Pointer to picture data (indices) */
  &PalbmMinus  /* Pointer to palette */
};

/*********************************************************************
*
*       Static code
*
**********************************************************************
*/
/*********************************************************************
*
*       _FillNode
*
* Purpose:
*   Recursive filling of node
*
* Parameters:
*   hTree     - obvious
*   NumNodes  - Number of child nodes to be created at each node
*   NumLeafs - Number of leaves to be created at each node
*   MaxDepth  - Maximum depth (1.1.1.1.1.....)
*   CurDepth  - Current depth
*   acBuffer  - String to be used for TREEVIEW items
*   p         - Pointer into to string to be used for numbering
*
* Return value:
*  0 on success, 1 on error
*/
static int _FillNode(WM_HWIN hTree, TREEVIEW_ITEM_Handle hNode, int NumNodes, int NumLeafs, int MaxDepth, int CurDepth, char * acBuffer, char * p) {
  TREEVIEW_ITEM_Handle hItem = 0;
  int i, Position;

  *(p + 1) = 0;
  *p = '0' - 1;
  if (--CurDepth) {
    //
    // Create nodes
    //
    for (i = 0; i < NumNodes; i++) {
      (*p)++;
      Position = hItem ? TREEVIEW_INSERT_BELOW : TREEVIEW_INSERT_FIRST_CHILD;
      hItem = TREEVIEW_ITEM_Create(1, acBuffer, 0);
      if (hItem == 0) {
        return 1; // Error
      }
      TREEVIEW_AttachItem(hTree, hItem, hNode, Position);
      hNode = hItem;
      *(p + 1) = '.';
      p += 2;
      //
      // Recursive call of 'this' function for each node
      //
      _FillNode(hTree, hNode, NumNodes, NumLeafs, MaxDepth, CurDepth, acBuffer, p);
      p -= 2;
      *(p + 1) = 0;
    }
  }
  //
  // Create Leafs
  //
  for (i = 0; i < NumLeafs; i++) {
    (*p)++;
    Position = hItem ? TREEVIEW_INSERT_BELOW : TREEVIEW_INSERT_FIRST_CHILD;
    hItem = TREEVIEW_ITEM_Create(0, acBuffer, 0);
    if (hItem == 0) {
      return 1; // Error
    }
    TREEVIEW_AttachItem(hTree, hItem, hNode, Position);
    hNode = hItem;
  }
  return 0;
}

/*********************************************************************
*
*       _DrawLine
*/
static void _DrawLine(int x0, int y0, int x1, int y1) {
  GUI_SetColor(GUI_WHITE);
  GUI_SetLineStyle(GUI_LS_DOT);
  GUI_DrawLine(x0, y0, x1, y1);
  GUI_SetLineStyle(GUI_LS_SOLID);
}

/*********************************************************************
*
*       _SwapColors
*/
static void _SwapColors(GUI_COLOR * pColor) {
  GUI_COLOR Color;

  Color = *(pColor + 1);
  *(pColor + 1) = *(pColor + 2);
  *(pColor + 2) = Color;

}

/*********************************************************************
*
*       _TREEVIEW_OwnerDraw
*/
static int _TREEVIEW_OwnerDraw(const WIDGET_ITEM_DRAW_INFO * pDrawItemInfo) {
  TREEVIEW_ITEM_DRAW_INFO * pDrawInfo;
  TREEVIEW_ITEM_INFO        ItemInfo;
  TREEVIEW_ITEM_Handle      hItem;
  int i;
  GUI_COLOR * pColor;

  pDrawInfo = pDrawItemInfo->p;
  switch (pDrawItemInfo->Cmd) {
  case WIDGET_ITEM_DRAW_BACKGROUND:
    hItem = TREEVIEW_GetSel(pDrawItemInfo->hWin);
    TREEVIEW_OwnerDraw(pDrawItemInfo);
    if (hItem == pDrawInfo->hItem) {
      GUI_SetColor(USER_GREEN);
      GUI_FillRoundedRect(pDrawInfo->rText.x0 - 25, pDrawItemInfo->y0, pDrawInfo->rText.x1 + 10, pDrawItemInfo->y1, 6);
    }
    break;
  case WIDGET_ITEM_DRAW_BITMAP:
    //
    // Invert colors of bitmap in case of drawing a selected item
    //
    hItem = TREEVIEW_GetSel(pDrawItemInfo->hWin);
    if ((hItem == pDrawInfo->hItem) && ((pDrawItemInfo->ItemIndex == TREEVIEW_BI_CLOSED) || (pDrawItemInfo->ItemIndex == TREEVIEW_BI_OPEN) || (pDrawItemInfo->ItemIndex == TREEVIEW_BI_LEAF))) {
      pColor = (GUI_COLOR *)pDrawInfo->pBmOCL->pPal->pPalEntries;
      _SwapColors(pColor);
      TREEVIEW_OwnerDraw(pDrawItemInfo);
      _SwapColors(pColor);
    } else {
      TREEVIEW_OwnerDraw(pDrawItemInfo);
    }
    break;
  case WIDGET_ITEM_DRAW_TICKS:
    TREEVIEW_ITEM_GetInfo(pDrawInfo->hItem, &ItemInfo);
    //
    // Draw lines
    //
    for (i = 0; i < pDrawInfo->NumLines; i++) {
      if (ItemInfo.IsNode) {
        //
        // Extend horizontal line in case of a node
        //
        if (pDrawInfo->ay0[i] == pDrawInfo->ay1[i]) {
          pDrawInfo->ax1[i] += 10;
        }
      }
      _DrawLine(pDrawInfo->ax0[i], pDrawInfo->ay0[i], pDrawInfo->ax1[i], pDrawInfo->ay1[i]);
    }
    //
    // Draw connectors
    //
    for (i = 0; i < pDrawInfo->NumConnectors; i++) {
      _DrawLine(pDrawInfo->axc[i], pDrawItemInfo->y0, pDrawInfo->axc[i], pDrawItemInfo->y1);
    }
    break;
  default:
    return TREEVIEW_OwnerDraw(pDrawItemInfo);
  }
  return 0;
}

static void _cbBk(WM_MESSAGE * pMsg) {
  int xSize;

  switch (pMsg->MsgId) {
  case WM_PAINT:
    xSize = LCD_GetXSize();
    GUI_Clear();
    GUI_SetFont(GUI_FONT_24_ASCII);
    GUI_DispStringHCenterAt("Customized TREEVIEW widget", xSize >> 1, 5);
    GUI_DrawHLine(30, 0, xSize - 1);
    break;
  }
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
  WM_HWIN hTree;
  TREEVIEW_ITEM_Handle hNode;
  int xSize, ySize;
  char acBuffer[(TREEVIEW_DEPTH << 1) + 1];

  //
  // Initialize emWin
  //
  WM_SetCreateFlags(WM_CF_MEMDEV);
  GUI_Init();
  xSize = LCD_GetXSize();
  ySize = LCD_GetYSize();
  //
  // Set defaults for background and widgets
  //
  WM_SetCallback(WM_HBKWIN, _cbBk);
  SCROLLBAR_SetDefaultSkin(SCROLLBAR_SKIN_FLEX);
  SCROLLBAR_SetDefaultWidth(20);
  SCROLLBAR_SetThumbSizeMin(25);
  //
  //
  //
  GUI_SetFont(GUI_FONT_24_ASCII);
  GUI_DispStringHCenterAt("Customized TREEVIEW widget", 160, 5);
  //
  // Create TREEVIEW
  //
  hTree = TREEVIEW_CreateEx(0, 35, xSize, ySize - 35, WM_HBKWIN, WM_CF_SHOW, 0, GUI_ID_TREEVIEW0);
  TREEVIEW_SetAutoScrollV(hTree, 1);
  TREEVIEW_SetFont(hTree, GUI_FONT_24_ASCII);
  TREEVIEW_SetIndent(hTree, 30);
  TREEVIEW_SetTextIndent(hTree, 20);
  TREEVIEW_SetImage(hTree, TREEVIEW_BI_PLUS, &bmPlus);
  TREEVIEW_SetImage(hTree, TREEVIEW_BI_MINUS, &bmMinus);
  TREEVIEW_SetImage(hTree, TREEVIEW_BI_CLOSED, &bmClosed);
  TREEVIEW_SetImage(hTree, TREEVIEW_BI_OPEN, &bmOpen);
  TREEVIEW_SetImage(hTree, TREEVIEW_BI_LEAF, &bmLeaf);
  TREEVIEW_SetBitmapOffset(hTree, TREEVIEW_BI_PM, -21, -6);
  TREEVIEW_SetOwnerDraw(hTree, _TREEVIEW_OwnerDraw);
  TREEVIEW_SetBkColor(hTree, TREEVIEW_CI_SEL, USER_GREEN);
  TREEVIEW_SetBkColor(hTree, TREEVIEW_CI_UNSEL, GUI_BLACK);
  TREEVIEW_SetTextColor(hTree, TREEVIEW_CI_SEL, GUI_WHITE);
  TREEVIEW_SetTextColor(hTree, TREEVIEW_CI_UNSEL, GUI_WHITE);
  WIDGET_SetEffect(hTree, &WIDGET_Effect_None);
  //
  // Fill TREEVIEW
  //
  hNode = TREEVIEW_InsertItem(hTree, TREEVIEW_ITEM_TYPE_NODE, 0, 0, "Tree");
  _FillNode(hTree, hNode, NUM_CHILD_NODES, NUM_CHILD_ITEMS, TREEVIEW_DEPTH, TREEVIEW_DEPTH, acBuffer, acBuffer);
  TREEVIEW_ITEM_Expand(hNode);
  WM_SetFocus(hTree);
  while (1) {
    GUI_Delay(100);
  }
}

/*************************** End of file ****************************/
