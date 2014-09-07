/*********************************************************************
*                SEGGER Microcontroller GmbH & Co. KG                *
*        Solutions for real time microcontroller applications        *
*                           www.segger.com                           *
**********************************************************************
*                                                                    *
* C-file generated by                                                *
*                                                                    *
*        Bitmap converter for emWin V5.16.                           *
*        Compiled Jun  4 2012, 15:48:30                              *
*        (C) 1998 - 2010 Segger Microcontroller GmbH & Co. KG        *
*                                                                    *
**********************************************************************
*                                                                    *
* Source file: dodeca46                                              *
* Dimensions:  128 * 128                                             *
* NumColors:   2                                                     *
*                                                                    *
**********************************************************************
*/

#include <stdlib.h>

#include "GUI.h"

#ifndef GUI_CONST_STORAGE
  #define GUI_CONST_STORAGE const
#endif

/*   Palette
The following are the entries of the palette table.
Every entry is a 32-bit value (of which 24 bits are actually used)
the lower   8 bits represent the Red component,
the middle  8 bits represent the Green component,
the highest 8 bits (of the 24 bits used) represent the Blue component
as follows:   0xBBGGRR
*/

static GUI_CONST_STORAGE GUI_COLOR Colorsdodeca46[] = {
     0xFFFFFF,0x000000
};

static GUI_CONST_STORAGE GUI_LOGPALETTE Paldodeca46 = {
  2,	/* number of entries */
  0, 	/* No transparency */
  &Colorsdodeca46[0]
};

static GUI_CONST_STORAGE unsigned char acdodeca46[] = {
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXX___X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, _____X__, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXX____, _X__XXX_, _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, _____XXX, X_XXXXXX, X__XXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXX____, _XXXXXX_, XXXXXXXX, XX__XXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ______XX, XXXXXX_X, XXXXXXXX, XXXX__XX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXX____, _XXXXXXX, XXXX__XX, XXXXXXXX, XXXXX__X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, X_____XX, XXXXXXXX, XXX_XXXX, XXXXXXXX, XXXXXX__, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXX_, ____XXXX, XXXXXXXX, X_XXXXXX, XXXXXXXX, XXXXXXXX, __XXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXX___, XX___XXX, XXXXXXXX, __XXXXXX, XXXXXXXX, XXXXXXXX, X__XXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXX___XX, XXX__XXX, XXXXXX__, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXX__XXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, X___XXXX, XXX___XX, XXXXX__X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXX__XX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXX_, __XXXXXX, XXXX__XX, XXXXXX_X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXX__X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXX___, XXXXXXXX, XXXXX__X, _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXX_, _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXX___XX, XXXXXXXX, XXXX___X, XXXXXXXX, _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, __XXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, X___XXXX, XXXXXXXX, XX_X_X__, XXXXXXXX, X_XXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XX__XXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ___XXXXX, XXXXXXXX, _XXXXX__, XXXXXXXX, X_XXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXX__XXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXX__, _XXXXXXX, XXXXXX__, XXXXXXX_, _XXXXXXX, XX_XXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXX__XX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXX___X, XXXXXXXX, XXXX_XXX, XXXXXXX_, _XXXXXXX, XXX_XXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXX__, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XX___XXX, XXXXXXXX, ___XXXXX, XXXXXXXX, __XXXXXX, XXXX_XXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXX_, _XXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, ___XXXXX, XXXXXX__, XXXXXXXX, XXXXXXXX, ___XXXXX, XXXX_XXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, __XXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXX__, _XXXXXXX, XXX___XX, XXXXXXXX, XXXXXXXX, X__XXXXX, XXXXX_XX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XX__XXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXX___X, XXXXXXXX, ___XXXXX, XXXXXXXX, XXXXXXXX, X___XXXX, XXXXX__X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXX__XXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XX______, ________, _XXXXXXX, XXXXXXXX, XXXXXXXX, XX__XXXX, XXXXXX_X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXX_XX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XX_XXXXX, XX_X___X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XX___XXX, XXXXXXX_, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXX_XX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XX_XXXXX, XXXXX__X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXX__XXX, XXXXXXXX, _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXX_XX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, X__XXXXX, XXXXX__X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXX___XX, XXXXXXXX, _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXX_XX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, X__XXXXX, XXXXX_XX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXX__XX, XXXXXXXX, X_XXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXX_XX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, X_XXXXXX, XXXXX__X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXX__X, XXXXXXXX, XX_XXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXX__XX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, X_XXXXXX, XXXXX__X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXX__X, XXXXXXXX, XXX_XXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXX__XX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, X_XXXXXX, XXXXXX_X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXX__, XXXXXXXX, XXX__XXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXX__XX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, X_XXXXXX, XXXXXX_X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXX__, XXXXXXXX, XXXX_XXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXX__XX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, X_XXXXXX, XXXXXX_X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXX_, _XXXXXXX, XXXXX_XX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXX__XX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, __XXXXXX, XXXXXX_X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXX_, _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXX__XX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, __XXXXXX, XXXXXX_X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, __XXXXXX, XXXXXX__, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXX__XX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, _XXXXXXX, XXXXXX_X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ___XXXXX, XXXXXXX_, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXX_XXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, _XXXXXXX, XXXXXX_X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, X__XXXXX, XXXXXXX_, X__XXXXX, XXXXXXXX, XXXXXXXX, XXXX_XXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, _XXXXXXX, XXXXXX_X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, X___XXXX, XXXXXX_X, XXXX___X, XXXXXXXX, XXXXXXXX, XXXX_XXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, _XXXXXXX, XXXXXX_X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XX__XXXX, XXXXX_XX, XXXXXXX_, X_XXXXXX, XXXXXXXX, XXX__XXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXX_, _XXXXXXX, XXXXXX_X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XX___XXX, XXXX__XX, XXXXXXXX, XX___XXX, XXXXXXXX, XXX__XXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXX_, _XXXXXXX, XXXXXX_X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXX_____, _XXX_XXX, XXXXXXXX, XXXXX___, _XXXXXXX, XXX__XXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXX_, XXXXXXXX, XXXXXX_X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XX______, _____XXX, XXXXXXXX, XXXXXXXX, X___XXXX, XXX__XXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXX_, XXXXXXXX, XXXXXX_X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XX__XXXX, ________, __XXXXXX, XXXXXXXX, XXXX__XX, XXX__XXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXX_, XXXXXXXX, XXXXXX_X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, X___XXXX, X__XX___, ______XX, XXXXXXXX, XXXXXXX_, X____XXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXX_, XXXXXXXX, XXXXXX_X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ___XXXXX, __XXXXXX, X_______, ___XXXXX, XXXXXXXX, XX___XXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXX_, XXXXXXXX, XXXXXX_X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXX_, __XXXXXX, __XXXXXX, XXXXXX__, _______X, XXXXXXXX, XXX__XXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXX__, XXXXXXXX, XXXXXX_X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXX_, _XXXXXX_, _XXXXXXX, XXXXXXXX, XXX_____, ___XXXXX, XXX__XXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXX__, XXXXXXXX, XXXXXX_X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXX__, _XXXXX__, XXXXXXXX, XXXXXXXX, XXXXXXX_, ________, XX___XXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXX_X, XXXXXXXX, XXXXXX_X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXX___, XXXXXX_X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXX____, _____XXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXX_X, XXXXXXXX, XXXXXX_X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXX__X, XXXXX__X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, _____XXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXX_X, XXXXXXXX, XXXXXX_X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXX___X, XXXX__XX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XX___XXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXX_X, XXXXXXXX, XXXXXX_X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXX___XX, XXX__XXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XX__XXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXX__X, XXXXXXXX, XXXXXX__, XXXXXXXX, XXXXXXXX, XXXXXXXX, XX___XXX, XXX_XXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XX__XXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXX__X, XXXXXXXX, XXXXXX__, XXXXXXXX, XXXXXXXX, XXXXXXXX, XX__XXXX, XX__XXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XX__XXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXX_XX, XXXXXXXX, XXXXXX__, XXXXXXXX, XXXXXXXX, XXXXXXXX, X___XXXX, X__XXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XX__XXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXX_XX, XXXXXXXX, XXXXXX__, _XXXXXXX, XXXXXXXX, XXXXXXXX, ___XXXXX, X_XXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XX__XXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXX_XX, XXXXXXXX, XXXXXX__, ______XX, XXXXXXXX, XXXXXXXX, __XXXXXX, __XXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XX__XXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXX_XX, XXXXXXXX, XXXXXX_X, XXXXXX__, ____XXXX, XXXXXXX_, __XXXXX_, _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XX__XXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXX_XX, XXXXXXXX, XXXXX__X, XXXXXXXX, XXX_____, __XXXX__, _XXXXX__, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, X___XXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXX__XX, XXXXXXXX, XXXXX_XX, XXXXXXXX, XXXXXXXX, X_______, XXXXXX_X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, X___XXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXX__XX, XXXXXXXX, XXXXX_XX, XXXXXXXX, XXXXXXXX, XXXXX___, ____X__X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, X___XXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXX_XXX, XXXXXXXX, XXXX_XXX, XXXXXXXX, XXXXXXXX, XXXX___X, XXX___XX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, X___XXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXX_XXX, XXXXXXXX, XXXX_XXX, XXXXXXXX, XXXXXXXX, XXX___XX, XXXXX__X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, X__XXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXX__XX, XXXXXXXX, XXX__XXX, XXXXXXXX, XXXXXXXX, XX___XXX, XXXXXX_X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, X__XXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXX____, _XXXXXXX, XXX_XXXX, XXXXXXXX, XXXXXXXX, XX__XXXX, XXXXXX__, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, X__XXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXX___, ___XXXXX, XXX_XXXX, XXXXXXXX, XXXXXXXX, X___XXXX, XXXXXXX_, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, X__XXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXX__X, _____XXX, XX__XXXX, XXXXXXXX, XXXXXXXX, ___XXXXX, XXXXXXX_, _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, X__XXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXX__, XX_____X, XX_XXXXX, XXXXXXXX, XXXXXXXX, __XXXXXX, XXXXXXXX, _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, X__XXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXX__, XXXX____, _X_XXXXX, XXXXXXXX, XXXXXXX_, __XXXXXX, XXXXXXXX, __XXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, X__XXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXX_, _XXXXX__, ___XXXXX, XXXXXXXX, XXXXXX__, _XXXXXXX, XXXXXXXX, X_XXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, X__XXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, _XXXXXXX, _____XXX, XXXXXXXX, XXXXX___, XXXXXXXX, XXXXXXXX, X__XXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, X__XXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, __XXXXXX, _______X, XXXXXXXX, XXXXX__X, XXXXXXXX, XXXXXXXX, X__XXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ___XXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, X_XXXXXX, __XX____, _XXXXXXX, XXXX___X, XXXXXXXX, XXXXXXXX, XX_XXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, __XXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, X__XXXX_, _XXXXX__, ___XXXXX, XXX___XX, XXXXXXXX, XXXXXXXX, XX__XXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, __XXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XX_XXXX_, _XXXXXXX, _____XXX, XXX__XXX, XXXXXXXX, XXXXXXXX, XXX_XXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, __XXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XX__XXX_, XXXXXXXX, XX_____X, XX___XXX, XXXXXXXX, XXXXXXXX, XXX__XXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, __XXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXX__X__, XXXXXXXX, XXXX____, ____XXXX, XXXXXXXX, XXXXXXXX, XXXX_XXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, __XXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXX_X__, XXXXXXXX, XXXXXX__, ___XXXXX, XXXXXXXX, XXXXXXXX, XXXX__XX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, __XXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXX___X, XXXXXXXX, XXXXXXXX, ____XXXX, XXXXXXXX, XXXXXXXX, XXXXX_XX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, __XXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXX__X, XXXXXXXX, XXXXXXXX, X____XXX, XXXXXXXX, XXXXXXXX, XXXXX__X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXX____, __XXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXX__X, XXXXXXXX, XXXXXXXX, XX____XX, XXXXXXXX, XXXXXXXX, XXXXXX_X, XXXXXXXX, XXXXXXXX, XXXXXXXX, X____XXX, __XXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXX__, _XXXXXXX, XXXXXXXX, XXX___XX, XXXXXXXX, XXXXXXXX, XXXXXX__, XXXXXXXX, XXXXXXXX, XXXXXX__, __XXXXXX, __XXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, __XXXXXX, XXXXXXXX, XXXX___X, XXXXXXXX, XXXXXXXX, XXXXXXX_, XXXXXXXX, XXXXXXXX, XX_____X, XXXXXXXX, _XXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, X__XXXXX, XXXXXXXX, XXXXX___, XXXXXXXX, XXXXXXXX, XXXXXXX_, _XXXXXXX, XXXXXXX_, ___XXXXX, XXXXXXXX, _XXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XX___XXX, XXXXXXXX, XXXXXX__, _XXXXXXX, XXXXXXXX, XXXXXXXX, _XXXXXXX, XXXX____, XXXXXXXX, XXXXXXXX, _XXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXX__XX, XXXXXXXX, XXXXXXX_, __XXXXXX, XXXXXXXX, XXXXXXXX, __XXXXXX, _____XXX, XXXXXXXX, XXXXXXXX, _XXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXX__X, XXXXXXXX, XXXXXXXX, ___XXXXX, XXXXXXXX, XXXXXXXX, X_XXX___, _XXXXXXX, XXXXXXXX, XXXXXXXX, _XXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXX__, _XXXXXXX, XXXXXXXX, X___XXXX, XXXXXXXX, XXXXXXXX, X_____XX, XXXXXXXX, XXXXXXXX, XXXXXX__, _XXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, __XXXXXX, XXXXXXXX, XX___XXX, XXXXXXXX, XXXXXXXX, ___XXXXX, XXXXXXXX, XXXXXXXX, XXXX___X, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, X__XXXXX, XXXXXXXX, XXX___XX, XXXXXXXX, XXXXXXX_, _XXXXXXX, XXXXXXXX, XXXXXXXX, XX___XXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XX___XXX, XXXXXXXX, XXXX___X, XXXXXXXX, XXXXX___, XXXXXXXX, XXXXXXXX, XXXXXXXX, ___XXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXX__XX, XXXXXXXX, XXXXX___, XXXXXXXX, XXX___XX, XXXXXXXX, XXXXXXXX, XXXXX___, _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXX__X, XXXXXXXX, XXXXXX__, _XXXXXXX, XX__XXXX, XXXXXXXX, XXXXXXXX, XXX___XX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXX__, _XXXXXXX, XXXXXXX_, __XXXXXX, ___XXXXX, XXXXXXXX, XXXXXXXX, X___XXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, __XXXXXX, XXXXXXXX, ___XXXX_, _XXXXXXX, XXXXXXXX, XXXXXXX_, __XXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, X__XXXXX, XXXXXXXX, X___X___, XXXXXXXX, XXXXXXXX, XXXX____, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XX__XXXX, XXXXXXXX, XX____XX, XXXXXXXX, XXXXXXXX, XX___XXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXX__XX, XXXXXXXX, XX___XXX, XXXXXXXX, XXXXXXXX, ___XXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXX__X, XXXXXXXX, ______XX, XXXXXXXX, XXXXX___, _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXX__, XXXXXX__, _XXX___X, XXXXXXXX, XXX____X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXX_, __XXX___, XXXXX___, XXXXXXXX, X___XXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, X_____XX, XXXXXX__, _XXXXXX_, __XXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XX______, __XXXXX_, __XX____, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXX_, ________, ______XX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ___XXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX
};

GUI_CONST_STORAGE GUI_BITMAP bmdodeca46 = {
  128, /* XSize */
  128, /* YSize */
  16, /* BytesPerLine */
  1, /* BitsPerPixel */
  acdodeca46,  /* Pointer to picture data (indices) */
  &Paldodeca46,   /* Pointer to palette */
  NULL
};

/* *** End of file *** */
