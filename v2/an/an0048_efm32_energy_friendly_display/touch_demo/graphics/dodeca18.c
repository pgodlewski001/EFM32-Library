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
* Source file: dodeca18                                              *
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

static GUI_CONST_STORAGE GUI_COLOR Colorsdodeca18[] = {
     0xFFFFFF,0x000000
};

static GUI_CONST_STORAGE GUI_LOGPALETTE Paldodeca18 = {
  2,	/* number of entries */
  0, 	/* No transparency */
  &Colorsdodeca18[0]
};

static GUI_CONST_STORAGE unsigned char acdodeca18[] = {
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
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXX__XXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ________, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXX___, ___XXXX_, __XXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXX_____, __XXXXXX, XX___XXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XX__XXX_, _XXXXXXX, XXXX___X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, X__XXX__, XXXXXXXX, XXXXXXX_, __XXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, __XX___X, XXXXXXXX, XXXXXXXX, X___XXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXX_, XXX___XX, XXXXXXXX, XXXXXXXX, XXXX___X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXX_X, XX___XXX, XXXXXXXX, XXXXXXXX, XXXXXX__, _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXX__XX, X___XXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, X___XXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXX__XXX, ___XXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXX___XX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XX__XXXX, _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXX___, _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, X_XXXX__, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ___XXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, _XXXX__X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XX____XX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXX__, XXXX__XX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXX___, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXX__X, XXX__XXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXX_, ___XXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXX__XX, XX__XXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XX___XXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXX_XXXX, X__XXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXX___XX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XX_XXXXX, __XXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXX___XX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, __XXXXX_, _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXX____X, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXX_, _XXXXX__, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXX__X__, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXX__, XXXX___X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXX__XX_, _XXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXX_XX, XXX___XX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XX_____X, __XXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXX_XXX, XX___XXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXX_____, ___XXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XX__XXXX, XX_XXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXX__XX_, ____XXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, X__XXXXX, __XXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXX__XXX, XX___XXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, ___XXXX_, _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXX__XXX, XXX__XXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXX_, _X__XX__, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXX__XXX, XXX__XXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXX__, XXX_____, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXX__XXX, XXXX_XXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXX_X, XXX_____, _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXX__XXX, XXXX_XXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXX_XX, X_____X_, __XXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXX__XXX, XXXX_XXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXX_XXX, ______XX, __XXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXX__XXX, XXXX_XXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXX_XX__, ___XX__X, X__XXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXX__XXX, XXXX_XXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XX_XX___, _XXXX__X, X___XXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXX__XXX, XXXX_XXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, X_XX___X, XXXXXX__, XX__XXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXX__XXX, XXXX__XX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, ______XX, XXXXXX__, XXX__XXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXX__XXX, XXXX__XX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXX_, ____XXXX, XXXXXXX_, _XX___XX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXX__XXX, XXXXX_XX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXX__, ___XXXXX, XXXXXXXX, __XX__XX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXX__XXX, XXXXX_XX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXX___, __XXXXXX, XXXXXXXX, __XXX__X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXX__XXX, XXXXX_XX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXX____, XXXXXXXX, XXXXXXXX, X__XX__X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXX__XXX, XXXXX_XX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXX____X, XXXXXXXX, XXXXXXXX, X__XXX__, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XX___XXX, XXXXX_XX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XX___XXX, XXXXXXXX, XXXXXXXX, XX__XX__, _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XX__XXXX, XXXXX_XX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XX__XXXX, XXXXXXXX, XXXXXXXX, XX__XXX_, _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XX___XXX, XXXXX__X, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XX__XXXX, XXXXXXXX, XXXXXXXX, XXX__XXX, __XXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XX___XXX, XXXXX__X, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXX_XXXX, XXXXXXXX, XXXXXXXX, XXX___XX, ___XXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XX__XXXX, XXXXXX_X, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXX_XXXX, XXXXXXXX, XXXXXXXX, XXXX__XX, X__XXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XX__XXXX, XXXXXX_X, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXX_XXXX, XXXXXXXX, XXXXXXXX, XXXXX__X, XX__XXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XX__XXXX, XXXXXX_X, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXX_XXXX, XXXXXXXX, XXXXXXXX, XXXXX__X, XX___XXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XX__XXXX, XXXXXX_X, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXX__XXX, XXXXXXXX, XXXXXXXX, XXXXXX__, ______XX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XX__XXXX, XXXXXX_X, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXX__XXX, XXXXXXXX, XXXXXXXX, XXXXXX__, ______XX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XX__XXXX, XXXXXX_X, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXX_XXX, XXXXXXXX, XXXXXXXX, XXXXXX__, XXXX___X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XX__XXXX, XXXXXX__, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXX_XXX, XXXXXXXX, XXXXXXXX, XXXXXX__, XXXXX__X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XX__XXXX, XXXXXX__, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXX_XXX, XXXXXXXX, XXXXXXXX, XXXXXX__, XXXXX___, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XX__XXXX, XXXXXXX_, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXX__XX, XXXXXXXX, XXXXXXXX, XXXXXX__, XXXXXX__, _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XX__XXXX, XXXXXXX_, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXX__XX, XXXXXXXX, XXXXXXXX, XXXXXX_X, XXXXXXX_, _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XX__XXXX, XXXXXXX_, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXX_XX, XXXXXXXX, XXXXXXXX, XXXXXX_X, XXXXXXX_, __XXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ____XXXX, XXXXXXX_, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXX_XX, XXXXXXXX, XXXXXXXX, XXXXXX_X, XXXXXXXX, __XXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XX______, _____XXX, XXXXXXX_, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXX_XX, XXXXXXXX, XXXXXXXX, XXXXX__X, XXXXXXXX, X__XXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXX___, _______X, XXX__XXX, XXXXXXX_, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXX__X, XXXXXXXX, XXXXXXXX, XXXXX__X, XXXXXXXX, X___XXXX, XXXXXXXX, XXXXXXXX, XXXXXXX_, ________, __XXXXXX, XXX__XXX, XXXXXXX_, _XXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXX__X, XXXXXXXX, XXXXXXXX, XXXXX__X, XXXXXXXX, XX__XXXX, XXXXXXXX, XXXXXXXX, XXX_____, _____XXX, XXXXXXXX, XXX___XX, XXXXXXX_, _XXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXX_X, XXXXXXXX, XXXXXXXX, XXXXX__X, XXXXXXXX, XXX__XXX, XXXXXXXX, XXXXXX__, ________, X__XXXXX, XXXXXXXX, XXXX__XX, XXXXXXX_, _XXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXX_X, XXXXXXXX, XXXXXXXX, XXXXX__X, XXXXXXXX, XXX___XX, XXXXXXXX, X_______, ___XXXXX, XX_XXXXX, XXXXXXXX, XXXX__XX, XXXXX___, _XXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXX_X, XXXXXXXX, XXXXXXXX, XXXXX_XX, XXXXXXXX, XXXX__XX, XXXX____, ______XX, XXXXXXXX, XX__XXXX, XXXXXXXX, XXXX___X, XX______, _XXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXX_X, XXXXXXXX, XXXXXXXX, XXXXX_XX, XXXXXXXX, XXXX____, ________, _XXXXXXX, XXXXXXXX, XXX__XXX, XXXXXXXX, XXXXX___, ____XXX_, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXX__, XXXXXXXX, XXXXXXXX, XXXXX_XX, XXXXXXXX, XXXXX___, ____XXXX, XXXXXXXX, XXXXXXXX, XXXX_XXX, XXXXXXXX, XXXX____, _XXXXXX_, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXX__, XXXXXXXX, XXXXXXXX, XXXX__XX, XXXXXXXX, XXXXX__X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXX__XX, XXXXXXXX, XX______, XXXXXXX_, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXX_, XXXXXXXX, XXXXXXXX, XXXX__XX, XXXXXXXX, XXXXX__X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXX__X, XXXXXXX_, ___XXX__, XXXXXX__, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXX_, XXXXXXXX, XXXXXXXX, XXXX__XX, XXXXXXXX, XXXX___X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXX_X, XXXX____, XXXXXX__, XXXXXX__, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXX_, XXXXXXXX, XXXXXXXX, XXXX__XX, XXXXXXXX, XXXX__XX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXX__, X____XXX, XXXXXX__, _XXXXX_X, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXX_, _XXXXXXX, XXXXXXXX, XXXX__XX, XXXXXXXX, XXXX__XX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXX_, __XXXXXX, XXXXXXX_, _XXXXX_X, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXX_, _XXXXXXX, XXXXXXXX, XXXX__XX, XXXXXXXX, XXX___XX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXX__, XXXXXXXX, XXXXXXX_, _XXXXX_X, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, _XXXXXXX, XXXXXXXX, XXXX_XXX, XXXXXXXX, XXX__XXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXX__X, XXXXXXXX, XXXXXXX_, __XXXX_X, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, _XXXXXXX, XXXXXXXX, XXXX_XXX, XXXXXXXX, XX___XXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXX__XX, XXXXXXXX, XXXXXXXX, __XXX__X, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, _XXXXXXX, XXXXXXXX, XXX__XXX, XXXXXXXX, XX___XXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXX___XX, XXXXXXXX, XXXXXXXX, __XXX_XX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, __XXXXXX, XXXXXXXX, XXX__XXX, XXXXXXXX, XX__XXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXX__XXX, XXXXXXXX, XXXXXXXX, ___XX_XX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, __XXXXXX, XXXXXXXX, XXX__XXX, XXXXXXXX, X___XXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XX__XXXX, XXXXXXXX, XXXXXXXX, X__XX_XX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, X_XXXXXX, XXXXXXXX, XXX__XXX, XXXXXXXX, X___XXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, X__XXXXX, XXXXXXXX, XXXXXXXX, X__X__XX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, X_XXXXXX, XXXXXXXX, XXX__XXX, XXXXXXXX, X__XXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, __XXXXXX, XXXXXXXX, XXXXXXXX, X_____XX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, X_XXXXXX, XXXXXXXX, XXX__XXX, XXXXXXXX, ___XXXXX, XXXXXXXX, XXXXXXXX, XXXXXXX_, _XXXXXXX, XXXXXXXX, XXXXXXXX, XX___XXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, X_______, ________, ____XXXX, XXXXXXXX, __XXXXXX, XXXXXXXX, XXXXXXXX, XXXXXX__, XXXXXXXX, XXXXXXXX, XXXXXXXX, XX___XXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, X_______, ________, ______XX, XXXXXXXX, __XXXXXX, XXXXXXXX, XXXXXXXX, XXXXX__X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XX___XXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXX__XXX, XXXXXXXX, XXXX____, _XXXXXX_, __XXXXXX, XXXXXXXX, XXXXXXXX, XXXXX__X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXX__XXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXX___X, XXXXXXXX, XXXXXX__, ___XXXX_, _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXX__XX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXX__XXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXX__, XXXXXXXX, XXXXXXXX, X____XX_, _XXXXXXX, XXXXXXXX, XXXXXXXX, XXX__XXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XX__XXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXX_, __XXXXXX, XXXXXXXX, XXX_____, _XXXXXXX, XXXXXXXX, XXXXXXXX, XX__XXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ___XXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, X__XXXXX, XXXXXXXX, XXXXX___, __XXXXXX, XXXXXXXX, XXXXXXXX, X__XXXXX, XXXXXXXX, XXXXXXXX, XXXXXXX_, _XXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XX___XXX, XXXXXXXX, XXXXXX__, ____XXXX, XXXXXXXX, XXXXXXXX, __XXXXXX, XXXXXXXX, XXXXXXXX, XXXXX___, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXX___X, XXXXXXXX, XXXXX___, XX____XX, XXXXXXXX, XXXXXXX_, _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXX__XX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXX___, XXXXXXXX, XXXXX__X, XXXXX___, _XXXXXXX, XXXXXX__, _XXXXXXX, XXXXXXXX, XXXXXXXX, XX___XXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXX_, __XXXXXX, XXXXX__X, XXXXXXX_, ___XXXXX, XXXXXX__, XXXXXXXX, XXXXXXXX, XXXXXXXX, X__XXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ___XXXXX, XXXX___X, XXXXXXXX, XX____XX, XXXXX__X, XXXXXXXX, XXXXXXXX, XXXXXXX_, __XXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XX___XXX, XXXX__XX, XXXXXXXX, XXXX____, XXXX__XX, XXXXXXXX, XXXXXXXX, XXXXXX__, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXX___XX, XXXX__XX, XXXXXXXX, XXXXXX__, __X__XXX, XXXXXXXX, XXXXXXXX, XXXXX__X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXX___, XXX___XX, XXXXXXXX, XXXXXXXX, X___XXXX, XXXXXXXX, XXXXXXXX, XXX___XX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXX__, _XX__XXX, XXXXXXXX, XXXXXXXX, XXX__XXX, XXXXXXXX, XXXXXXXX, XX__XXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, _____XXX, XXXXXXXX, XXXXXXXX, XXX__XXX, XXXXXXXX, XXXXXXXX, ___XXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, X_____XX, XXXXXXXX, XXXXXXXX, XXXX__XX, XXXXXXXX, XXXXXXX_, _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXX_____, __XXXXXX, XXXXXXXX, XXXXX__X, XXXXXXXX, XXXXX___, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXX_, _____XXX, XXXXXXXX, XXXXXX__, XXXXXXXX, XXXX__XX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXX_____, __XXXXXX, XXXXXXX_, _XXXXXXX, XXX__XXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ______XX, XXXXXXX_, _XXXXXXX, X___XXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXX____, __XXXXXX, __XXXXXX, __XXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ______XX, X__XXX__, _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXX____, ____X__X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ______XX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
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

GUI_CONST_STORAGE GUI_BITMAP bmdodeca18 = {
  128, /* XSize */
  128, /* YSize */
  16, /* BytesPerLine */
  1, /* BitsPerPixel */
  acdodeca18,  /* Pointer to picture data (indices) */
  &Paldodeca18,   /* Pointer to palette */
  NULL
};

/* *** End of file *** */
