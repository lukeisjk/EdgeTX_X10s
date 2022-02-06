/*******************************************************************************
 * Size: 9 px
 * Bpp: 4
 * Opts: --no-prefilter --bpp 4 --size 9 --font Roboto/Roboto-Regular.ttf -r 0x20-0x7F,0xB0,0x2022,0xDF,0xE4,0xF6,0xFC,0xC4,0xD6,0xDC --font EdgeTX_extra.ttf -r 0x80-0x94 --format lvgl -o lv_font_roboto_9.c --force-fast-kern-format --lv-include ../thirdparty/lvgl/src/lvgl.h
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "../thirdparty/lvgl/src/lvgl.h"
#endif

#ifndef LV_FONT_ROBOTO_9
#define LV_FONT_ROBOTO_9 1
#endif

#if LV_FONT_ROBOTO_9

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */

    /* U+0021 "!" */
    0x49, 0x39, 0x38, 0x38, 0x26, 0x0, 0x14, 0x0,

    /* U+0022 "\"" */
    0x66, 0xca, 0xa1, 0x18,

    /* U+0023 "#" */
    0x0, 0x48, 0x50, 0x5, 0x41, 0x20, 0x35, 0xb7,
    0x88, 0x4, 0xec, 0x60, 0x99, 0x7b, 0x40, 0x8,
    0x1a, 0x0, 0xa8, 0x28, 0x0,

    /* U+0024 "$" */
    0x0, 0x38, 0x4, 0xdc, 0xe0, 0x56, 0x12, 0xa7,
    0x40, 0x46, 0x11, 0x8a, 0x1, 0xd, 0xab, 0x28,
    0x24, 0xe, 0x4e, 0x10, 0x2, 0x80, 0x0,

    /* U+0025 "%" */
    0x2a, 0x80, 0xc, 0xe3, 0x21, 0x40, 0x7, 0x29,
    0x65, 0x0, 0xc, 0x3d, 0x0, 0x74, 0x1c, 0xc0,
    0x0, 0xa1, 0x8d, 0xc8, 0x8, 0xa, 0xa8, 0x0,

    /* U+0026 "&" */
    0x8, 0xb9, 0x0, 0xb4, 0x2c, 0x2, 0xc6, 0xb0,
    0xa, 0x78, 0x2, 0x59, 0x68, 0x91, 0x75, 0xa,
    0xc0, 0x1a, 0x9b, 0xc3,

    /* U+0027 "'" */
    0x81, 0x80, 0x10,

    /* U+0028 "(" */
    0x0, 0x10, 0x1c, 0x5, 0x81, 0x48, 0x2b, 0x83,
    0x30, 0x15, 0xc0, 0x6c, 0x1, 0x42, 0x3, 0x20,
    0x10,

    /* U+0029 ")" */
    0x20, 0x3, 0xa0, 0x3, 0x0, 0x12, 0x60, 0xcc,
    0x5, 0x70, 0x65, 0xa, 0x21, 0xa0, 0x82, 0x0,
    0xc0,

    /* U+002A "*" */
    0x6, 0x40, 0x8b, 0xa7, 0xb, 0xa0, 0x34, 0x61,

    /* U+002B "+" */
    0x0, 0x50, 0x6, 0xd0, 0x4, 0x67, 0xe4, 0x80,
    0x34, 0x3, 0x68, 0x0,

    /* U+002C "," */
    0x75, 0x92, 0x10,

    /* U+002D "-" */
    0x9a, 0x30,

    /* U+002E "." */
    0x37,

    /* U+002F "/" */
    0x0, 0x3a, 0x0, 0x2c, 0x0, 0x6e, 0x0, 0x91,
    0x0, 0x50, 0x1, 0x54, 0x0, 0xa0, 0x8,

    /* U+0030 "0" */
    0xa, 0xba, 0x4, 0x80, 0x75, 0x75, 0x4, 0x88,
    0x28, 0x24, 0x3a, 0x82, 0x3a, 0x40, 0x3a, 0x85,
    0x5d, 0x0,

    /* U+0031 "1" */
    0x5, 0xc3, 0x27, 0xa3, 0x0, 0x49, 0x80, 0x24,
    0xc0, 0x12, 0x60, 0x9, 0x30, 0x4, 0x98,

    /* U+0032 "2" */
    0x1a, 0xbb, 0x3, 0xa8, 0x42, 0x88, 0x2, 0x10,
    0x0, 0x56, 0x1, 0x61, 0x0, 0x2c, 0xc0, 0xd,
    0xd7, 0x67,

    /* U+0033 "3" */
    0xb, 0xb5, 0x3, 0x28, 0x42, 0x0, 0x52, 0x60,
    0x79, 0x40, 0x1a, 0x15, 0x90, 0x1d, 0x86, 0xea,
    0x80,

    /* U+0034 "4" */
    0x0, 0x17, 0x80, 0x55, 0xc0, 0x3, 0x8d, 0x0,
    0x58, 0xe8, 0x2b, 0x86, 0x84, 0xdd, 0xbe, 0x40,
    0x2d, 0x0,

    /* U+0035 "5" */
    0xc, 0xc9, 0x83, 0x0, 0x37, 0x5d, 0x8, 0x18,
    0x34, 0x0, 0x45, 0x47, 0x20, 0x90, 0x13, 0x76,
    0x10,

    /* U+0036 "6" */
    0x3, 0xb8, 0x0, 0x58, 0x80, 0x13, 0x2a, 0x41,
    0x68, 0x1d, 0x9a, 0x3, 0x93, 0xa0, 0x67, 0x8,
    0xbb, 0x0,

    /* U+0037 "7" */
    0x7b, 0xb6, 0x48, 0x5, 0x6, 0x1, 0x60, 0x4,
    0xcc, 0x0, 0xb0, 0x40, 0x7, 0x20, 0x15, 0x18,
    0x0,

    /* U+0038 "8" */
    0xa, 0xba, 0x4, 0x80, 0x85, 0x39, 0x9, 0x30,
    0xbc, 0xb0, 0x58, 0x7, 0x66, 0x81, 0x5c, 0x2e,
    0xe1,

    /* U+0039 "9" */
    0xa, 0xb9, 0x6, 0x60, 0x51, 0xc2, 0x3, 0x31,
    0x60, 0x25, 0xc2, 0x6a, 0xd4, 0x2, 0xb1, 0x7,
    0xb4, 0x0,

    /* U+003A ":" */
    0x47, 0x0, 0xf2, 0x38,

    /* U+003B ";" */
    0x65, 0x0, 0xf3, 0x32, 0x48, 0x40,

    /* U+003C "<" */
    0x0, 0x25, 0x25, 0xc0, 0xb5, 0xa8, 0x4, 0xf6,
    0x1, 0x80,

    /* U+003D "=" */
    0x3b, 0xb8, 0xc0, 0x38, 0xee, 0xe3,

    /* U+003E ">" */
    0x59, 0x10, 0x8, 0xea, 0x44, 0xa, 0x2c, 0x96,
    0xcc, 0x3, 0xe0,

    /* U+003F "?" */
    0x3c, 0xc2, 0xb1, 0x6, 0x80, 0xa, 0xc0, 0x18,
    0x40, 0xae, 0x1, 0xe5, 0x50, 0x0,

    /* U+0040 "@" */
    0x0, 0x3c, 0xcc, 0x40, 0x7, 0x40, 0xa, 0x40,
    0x64, 0x1a, 0x50, 0x99, 0x50, 0xa0, 0xa0, 0x25,
    0xc9, 0xcc, 0xce, 0x10, 0xc7, 0x4, 0xac, 0x2e,
    0x6c, 0x74, 0xf5, 0x22, 0x14, 0x20, 0x1e, 0x19,
    0x99, 0x0, 0x0,

    /* U+0041 "A" */
    0x0, 0x4b, 0x80, 0x6b, 0xb0, 0x4, 0x8d, 0x4,
    0x0, 0xa1, 0x38, 0x0, 0x75, 0xdb, 0x41, 0x58,
    0x1, 0x7, 0x64, 0x0, 0x49,

    /* U+0042 "B" */
    0x4e, 0xbc, 0x50, 0x49, 0x0, 0x68, 0x24, 0x80,
    0xd8, 0x26, 0xdf, 0x28, 0x24, 0x80, 0x34, 0x12,
    0x40, 0x1a, 0x9, 0xd7, 0x8c, 0x0,

    /* U+0043 "C" */
    0x6, 0xcb, 0x80, 0x2c, 0x0, 0x51, 0xb3, 0x80,
    0x4, 0x4e, 0xc0, 0x19, 0x9c, 0x0, 0x22, 0x2c,
    0x0, 0x51, 0x82, 0xdd, 0x9c, 0x0,

    /* U+0044 "D" */
    0x4e, 0xbb, 0x18, 0x24, 0x80, 0xe0, 0x24, 0x80,
    0x25, 0x11, 0x20, 0x7, 0x54, 0x90, 0x4, 0xa2,
    0x24, 0x7, 0x41, 0x3a, 0xf0, 0xc0,

    /* U+0045 "E" */
    0x4e, 0xbb, 0x42, 0x48, 0x4, 0x92, 0x1, 0x27,
    0x5d, 0x91, 0x12, 0x1, 0x24, 0x80, 0x49, 0xd7,
    0x69,

    /* U+0046 "F" */
    0x4e, 0xbb, 0x42, 0x48, 0x4, 0x92, 0x1, 0x26,
    0xdd, 0x89, 0x24, 0x2, 0x49, 0x0, 0x92, 0x40,
    0x20,

    /* U+0047 "G" */
    0x5, 0xcb, 0x90, 0x2c, 0x0, 0x42, 0x33, 0x80,
    0x67, 0x60, 0x9b, 0x66, 0x38, 0x1, 0x9c, 0x70,
    0x0, 0xee, 0x5, 0xcb, 0xa1,

    /* U+0048 "H" */
    0x49, 0x0, 0x1d, 0x24, 0x80, 0xe, 0x92, 0x40,
    0x7, 0x49, 0xd7, 0x6c, 0xa4, 0x90, 0x1, 0xd2,
    0x48, 0x0, 0xe9, 0x24, 0x0, 0x74,

    /* U+0049 "I" */
    0x3a, 0x3a, 0x3a, 0x3a, 0x3a, 0x3a, 0x3a,

    /* U+004A "J" */
    0x0, 0xa5, 0x0, 0x29, 0x40, 0xa, 0x50, 0x2,
    0x94, 0x0, 0xa5, 0x28, 0x82, 0xc8, 0xf2, 0xe0,
    0x0,

    /* U+004B "K" */
    0x49, 0x1, 0xc2, 0x49, 0xb, 0x30, 0x49, 0x93,
    0x0, 0x13, 0xbc, 0xc0, 0x9, 0x85, 0xa0, 0x4,
    0x90, 0x69, 0x4, 0x90, 0x5, 0xa0,

    /* U+004C "L" */
    0x49, 0x0, 0x92, 0x40, 0x24, 0x90, 0x9, 0x24,
    0x2, 0x49, 0x0, 0x92, 0x40, 0x24, 0xeb, 0xb3,
    0x80,

    /* U+004D "M" */
    0x4f, 0x0, 0x8b, 0xc5, 0x39, 0x80, 0x11, 0xc2,
    0x95, 0x60, 0xc, 0xb1, 0x49, 0xb1, 0x48, 0xb1,
    0x49, 0x57, 0xa2, 0xb1, 0x49, 0xc, 0xc0, 0x58,
    0xa4, 0x84, 0xb0, 0x58, 0x80,

    /* U+004E "N" */
    0x4d, 0x0, 0x15, 0x27, 0xb8, 0x15, 0x24, 0xe8,
    0x95, 0x24, 0xa5, 0x15, 0x24, 0x85, 0x3d, 0x24,
    0x80, 0xf5, 0x24, 0x80, 0x1e, 0x80,

    /* U+004F "O" */
    0x5, 0xcc, 0x38, 0x16, 0x0, 0x29, 0x19, 0xc0,
    0x9, 0x2e, 0xa0, 0x2, 0xa6, 0x70, 0x2, 0x49,
    0x60, 0x2, 0x90, 0x17, 0x31, 0x0,

    /* U+0050 "P" */
    0x4e, 0xbc, 0x70, 0x49, 0x0, 0x59, 0x24, 0x80,
    0x21, 0x11, 0x20, 0xc, 0x24, 0xeb, 0xb3, 0x2,
    0x48, 0x6, 0x49, 0x0, 0xc0,

    /* U+0051 "Q" */
    0x6, 0xcc, 0x38, 0x16, 0x0, 0x28, 0xd9, 0x80,
    0x4, 0x88, 0x28, 0x0, 0xe5, 0xd8, 0x0, 0x90,
    0x58, 0x0, 0xa4, 0x6, 0xcd, 0xc0, 0xe, 0x85,
    0x0, 0xf0,

    /* U+0052 "R" */
    0x4e, 0xbc, 0x60, 0x49, 0x0, 0x68, 0x24, 0x80,
    0xe8, 0x27, 0x5f, 0x18, 0x24, 0x85, 0x20, 0x24,
    0x81, 0x58, 0x24, 0x80, 0x2c, 0x80,

    /* U+0053 "S" */
    0xa, 0xbc, 0x35, 0x80, 0x1d, 0x4b, 0x10, 0x9,
    0x76, 0xc8, 0x2, 0x4c, 0x86, 0x0, 0x68, 0x55,
    0xe2, 0x80,

    /* U+0054 "T" */
    0x8b, 0xeb, 0xb0, 0x80, 0x2c, 0x40, 0x35, 0x88,
    0x6, 0xb1, 0x0, 0xd6, 0x20, 0x1a, 0xc4, 0x3,
    0x58, 0x80, 0x0,

    /* U+0055 "U" */
    0x67, 0x0, 0x4a, 0x33, 0x80, 0x25, 0x19, 0xc0,
    0x12, 0x8c, 0xe0, 0x9, 0x46, 0x70, 0x4, 0x99,
    0xa8, 0x1, 0x82, 0x11, 0x78, 0xc0,

    /* U+0056 "V" */
    0xb3, 0x0, 0x3b, 0x96, 0x0, 0x18, 0x21, 0xa0,
    0x58, 0x0, 0xb3, 0x76, 0x0, 0x2c, 0x60, 0x80,
    0x5d, 0x60, 0x1a, 0x98, 0x0,

    /* U+0057 "W" */
    0xa3, 0x7, 0x80, 0x2a, 0x66, 0x5, 0xd8, 0x15,
    0xca, 0x82, 0xe8, 0x24, 0xc3, 0xe, 0x19, 0x30,
    0x1, 0x70, 0x65, 0x18, 0x0, 0x8d, 0x0, 0x6c,
    0x80, 0x12, 0xc0, 0x14, 0xa0,

    /* U+0058 "X" */
    0x69, 0x0, 0x68, 0x86, 0x1c, 0x38, 0x0, 0xf7,
    0x40, 0x1b, 0x5c, 0x2, 0x4b, 0xd0, 0xb, 0x49,
    0xe0, 0x1e, 0x0, 0x1a, 0x40,

    /* U+0059 "Y" */
    0xb4, 0x0, 0x68, 0x9e, 0x3, 0x48, 0x2, 0x93,
    0x44, 0x0, 0x7f, 0x0, 0x1b, 0x8, 0x3, 0x58,
    0x80, 0x6b, 0x10, 0x0,

    /* U+005A "Z" */
    0x6b, 0xb6, 0x68, 0x6, 0x95, 0x0, 0x8e, 0xc0,
    0x36, 0x10, 0x4, 0xee, 0x0, 0x8b, 0x0, 0x34,
    0xed, 0xdc, 0x0,

    /* U+005B "[" */
    0x4c, 0x35, 0x70, 0x57, 0x5, 0x70, 0x57, 0x5,
    0x70, 0x57, 0x5, 0x70, 0x4c, 0x30,

    /* U+005C "\\" */
    0xa2, 0x0, 0x24, 0x0, 0x58, 0x1, 0x3a, 0x0,
    0x6, 0x80, 0x2b, 0x10, 0x2, 0xb0,

    /* U+005D "]" */
    0xa9, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b,
    0xa9,

    /* U+005E "^" */
    0x4, 0x20, 0x6, 0x40, 0x14, 0xe0, 0x41, 0xba,
    0x0,

    /* U+005F "_" */
    0xab, 0xb8, 0x0,

    /* U+0060 "`" */
    0x43, 0x1, 0xb0,

    /* U+0061 "a" */
    0xa, 0xba, 0x2, 0x40, 0xa3, 0x9, 0x96, 0x9b,
    0xb0, 0x51, 0x9b, 0x2e, 0xc8,

    /* U+0062 "b" */
    0x66, 0x0, 0x4c, 0xc0, 0x9, 0xae, 0xe1, 0x68,
    0x6, 0x76, 0x60, 0x1c, 0xb4, 0x3, 0x3b, 0x5d,
    0xc2,

    /* U+0063 "c" */
    0xa, 0xba, 0x6, 0x60, 0x29, 0xc9, 0x80, 0x4c,
    0xc0, 0x42, 0xa, 0xa8, 0x0,

    /* U+0064 "d" */
    0x0, 0x99, 0xc0, 0x26, 0x70, 0xbb, 0x63, 0xb3,
    0x83, 0xba, 0x10, 0x19, 0xd9, 0x80, 0xee, 0xa,
    0xa5, 0xb8,

    /* U+0065 "e" */
    0x9, 0xba, 0x6, 0x70, 0x84, 0x9c, 0xbb, 0x2b,
    0x30, 0x4, 0x1, 0x57, 0x42,

    /* U+0066 "f" */
    0x7, 0xb1, 0xd, 0x0, 0x3f, 0x40, 0x3, 0x40,
    0x2d, 0x0, 0xb4, 0x2, 0xd0, 0x0,

    /* U+0067 "g" */
    0xb, 0xb9, 0xd9, 0xc1, 0xdd, 0x8, 0xc, 0xec,
    0xe0, 0xee, 0xb, 0xb6, 0x30, 0x10, 0x42, 0x8d,
    0x5d, 0x0,

    /* U+0068 "h" */
    0x66, 0x0, 0x4c, 0xc0, 0x9, 0xae, 0xd8, 0x2d,
    0x1, 0xa, 0xcc, 0x7, 0x56, 0x60, 0x3a, 0xb3,
    0x1, 0xd4,

    /* U+0069 "i" */
    0x46, 0x0, 0x2c, 0x2c, 0x2c, 0x2c, 0x2c, 0x0,

    /* U+006A "j" */
    0x4, 0x50, 0xc, 0xae, 0xa, 0xe0, 0xae, 0xa,
    0xe0, 0xae, 0xc, 0xe7, 0xa6,

    /* U+006B "k" */
    0x67, 0x0, 0x99, 0xc0, 0x26, 0x72, 0xc1, 0x68,
    0xc1, 0x6, 0xec, 0x0, 0x33, 0xbc, 0xc, 0xe1,
    0x66,

    /* U+006C "l" */
    0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58,

    /* U+006D "m" */
    0x6b, 0xb6, 0x45, 0xd8, 0x19, 0xc2, 0x1c, 0x24,
    0xd9, 0x80, 0xea, 0x10, 0x8c, 0xc0, 0x75, 0x8,
    0x46, 0x60, 0x3a, 0x84, 0x20,

    /* U+006E "n" */
    0x6b, 0xb6, 0xb, 0x40, 0x42, 0xb3, 0x1, 0xd5,
    0x98, 0xe, 0xac, 0xc0, 0x75,

    /* U+006F "o" */
    0xa, 0xba, 0x16, 0x70, 0x58, 0x93, 0x1, 0xb6,
    0x60, 0x2c, 0x5, 0x5d, 0x80,

    /* U+0070 "p" */
    0x6b, 0xab, 0x16, 0x70, 0x57, 0x66, 0x1, 0xcb,
    0x38, 0x33, 0xb6, 0x55, 0x8b, 0x30, 0x2, 0x66,
    0x0, 0x40,

    /* U+0071 "q" */
    0xb, 0xb9, 0x98, 0xe0, 0xed, 0x8, 0xc, 0xd3,
    0x83, 0xb0, 0x5d, 0xb1, 0x80, 0x26, 0x60, 0x4,
    0xcc,

    /* U+0072 "r" */
    0x0, 0x9b, 0x29, 0x9c, 0x19, 0x80, 0xcc, 0x6,
    0x60, 0x0,

    /* U+0073 "s" */
    0x1b, 0xb4, 0x82, 0xc0, 0x30, 0x2, 0x2d, 0xc1,
    0xc, 0x2c, 0x86, 0xed, 0x40,

    /* U+0074 "t" */
    0x1b, 0xa, 0xe6, 0x1b, 0x1, 0xb0, 0x1b, 0x0,
    0x63, 0x80,

    /* U+0075 "u" */
    0x66, 0x3, 0xab, 0x30, 0x1d, 0x59, 0x80, 0xea,
    0xa7, 0x8, 0x51, 0xcb, 0xc5,

    /* U+0076 "v" */
    0xa2, 0xc, 0x5, 0x71, 0xa0, 0x5, 0xb2, 0x80,
    0x2b, 0x0, 0x24, 0xa0, 0x0,

    /* U+0077 "w" */
    0xa2, 0x1d, 0x6, 0x6e, 0xc2, 0xa2, 0x24, 0xd2,
    0x3d, 0x80, 0x2e, 0x83, 0x24, 0x1, 0x2c, 0x14,
    0x80,

    /* U+0078 "x" */
    0x77, 0xe, 0x0, 0x32, 0x90, 0x0, 0xda, 0x1,
    0x64, 0xa0, 0x3b, 0x6, 0x0,

    /* U+0079 "y" */
    0xb2, 0xd, 0x6, 0x72, 0xa0, 0x1c, 0x75, 0x0,
    0x5e, 0x80, 0x4b, 0x40, 0x13, 0x28, 0x1, 0xec,
    0x2,

    /* U+007A "z" */
    0x6b, 0xb7, 0x80, 0x52, 0xc0, 0x4, 0xa0, 0x0,
    0xe0, 0x80, 0x23, 0x6e, 0xc2,

    /* U+007B "{" */
    0x2, 0x90, 0xa2, 0xc, 0x0, 0x60, 0x4c, 0x0,
    0x30, 0x1, 0x80, 0xa, 0x20, 0x29,

    /* U+007C "|" */
    0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36,

    /* U+007D "}" */
    0x92, 0x2, 0xb0, 0x6, 0x0, 0x30, 0x0, 0xf2,
    0x18, 0x0, 0xc0, 0x2b, 0x9, 0x20,

    /* U+007E "~" */
    0xa, 0xa1, 0x1b, 0x22, 0x6, 0xac, 0x40,

    /* U+0080 "" */
    0x0, 0xe1, 0x70, 0x8, 0x8b, 0x9d, 0xc0, 0x2a,
    0xbd, 0x12, 0x1, 0xe1, 0x80, 0xf, 0xf8,

    /* U+0081 "" */
    0x0, 0x28, 0x7, 0xcd, 0x4, 0x22, 0x0, 0xd8,
    0xcd, 0x3b, 0xa0, 0x0, 0x30, 0x1, 0xff, 0xc3,

    /* U+0082 "" */
    0x0, 0x8, 0x4, 0x5e, 0xc0, 0x31, 0x5, 0x30,
    0x4, 0x0, 0x68, 0x0, 0xd0, 0x1, 0xa0, 0x3,
    0x40, 0x6, 0x10, 0x0,

    /* U+0083 "" */
    0x0, 0x8, 0x6, 0x80, 0xd, 0x0, 0x1a, 0x0,
    0x34, 0x0, 0x68, 0x0, 0xa6, 0xa4, 0x2, 0xa0,
    0x0,

    /* U+0084 "" */
    0x0, 0xe1, 0x0, 0x14, 0x7c, 0x80, 0x4c, 0xb0,
    0x0, 0x65, 0x2, 0x6, 0x50, 0x9, 0x54, 0x1,
    0xfe,

    /* U+0085 "" */
    0x2, 0x0, 0xf4, 0x90, 0x7, 0xa4, 0xc0, 0x3d,
    0x6, 0xa0, 0x1d, 0x14, 0x1, 0x96, 0x3c, 0x3,
    0xf0,

    /* U+0086 "" */
    0x0, 0xe1, 0x30, 0xc, 0x32, 0x1, 0x8a, 0x40,
    0x26, 0x29, 0x0, 0xd5, 0x20, 0x1d, 0x70, 0x80,
    0x10,

    /* U+0087 "" */
    0x1f, 0x94, 0x0, 0xd3, 0x20, 0xe, 0x41, 0x91,
    0x0, 0xe1, 0x91, 0x0, 0xe1, 0x91, 0x0, 0xf0,
    0x80,

    /* U+0088 "" */
    0x0, 0xc4, 0x1, 0xf0, 0xe9, 0x0, 0x7a, 0x6,
    0x0, 0x38, 0x60, 0x18, 0x80, 0x34, 0x8, 0x2,
    0x40, 0x21, 0x80, 0x9, 0x8c, 0x1, 0x2, 0x1,
    0xa4, 0x7, 0x22, 0x3b, 0xc,

    /* U+0089 "" */
    0x0, 0x8f, 0x5c, 0x11, 0xbb, 0xf0, 0x90, 0x1f,
    0x1d, 0x40, 0xa4, 0x18, 0xc8, 0x40, 0xc, 0xe,
    0x42, 0xc4, 0x0, 0x34, 0x10,

    /* U+008A "" */
    0x0, 0x9, 0x8, 0x4, 0xcf, 0xee, 0xe0, 0x3,
    0x82, 0x3, 0x81, 0x50, 0x5, 0x26, 0x14, 0x40,
    0x52, 0x1, 0x45, 0x48, 0x80,

    /* U+008B "" */
    0x0, 0x10, 0x7, 0x6f, 0xcb, 0x20, 0x3, 0xbf,
    0x1, 0x8, 0x19, 0x84, 0x0, 0x50, 0x60, 0x9,
    0x8, 0x0, 0xcd, 0x20, 0x0,

    /* U+008C "" */
    0x0, 0xf8, 0x9d, 0xa8, 0x0, 0xa0, 0x6, 0x0,
    0x5b, 0xc8, 0x83, 0x15, 0x38, 0x1, 0x8c, 0xcc,
    0x0, 0x27, 0x64, 0x0, 0x0,

    /* U+008D "" */
    0x0, 0x13, 0x18, 0x4, 0xc0, 0xc0, 0x6, 0xc6,
    0xc6, 0x6, 0x60, 0x32, 0x83, 0x53, 0x52, 0x83,
    0x52, 0xd2, 0x84, 0xe3, 0x64, 0x80, 0x18, 0x18,
    0x2, 0x60, 0x60, 0x8, 0xd5, 0x0,

    /* U+008E "" */
    0x0, 0xc2, 0x6, 0x65, 0xca, 0x65, 0x6f, 0x10,
    0x2, 0xaa, 0x5c, 0x0, 0xb1, 0xe0, 0x11, 0xa,
    0xe6, 0x18, 0x3, 0xc0,

    /* U+008F "" */
    0x5b, 0x97, 0x71, 0x34, 0xa1, 0xca, 0x33, 0xad,
    0x7a, 0x32, 0x10, 0xa, 0x35, 0x28, 0xa, 0x34,
    0x28, 0xa, 0x2c, 0x3b, 0x30, 0x80,

    /* U+0090 "" */
    0x0, 0xf9, 0x63, 0xdc, 0x9, 0xb, 0x81, 0x94,
    0x61, 0xe1, 0x8b, 0xe8, 0xb3, 0x81, 0xd9, 0x8e,
    0x0,

    /* U+0091 "" */
    0x6, 0x89, 0x0, 0xd0, 0xc, 0xf6, 0x40, 0x86,
    0x6c, 0xf8, 0x6, 0x73, 0xef, 0x20, 0x81, 0xef,
    0xf3, 0x3, 0x83, 0xbc, 0x60,

    /* U+0092 "" */
    0x0, 0x90, 0x3, 0xca, 0xa0, 0xb, 0x73, 0x1c,
    0xa0, 0x4, 0xcc, 0xc2, 0x0, 0x64, 0x0, 0xf2,
    0x80, 0x40,

    /* U+0093 "" */
    0x0, 0x1b, 0x28, 0x4, 0xac, 0xe8, 0x2, 0xd2,
    0x40, 0xec, 0xac, 0xc0, 0xb4, 0xc4, 0xa0, 0x3,
    0x23, 0x0, 0x0,

    /* U+0094 "" */
    0x56, 0x63, 0x82, 0x82, 0x94, 0xa8, 0x13, 0x31,
    0x40, 0x26, 0x50, 0x9, 0x9b, 0xa4,

    /* U+00B0 "°" */
    0x19, 0x56, 0x39, 0x19, 0x50,

    /* U+00C4 "Ä" */
    0x5, 0x53, 0x18, 0x5, 0x2e, 0x1, 0xae, 0xc0,
    0x12, 0x34, 0x10, 0x2, 0x84, 0xe0, 0x1, 0xd7,
    0x6d, 0x5, 0x60, 0x4, 0x1d, 0x90, 0x1, 0x24,

    /* U+00D6 "Ö" */
    0x2, 0x74, 0x60, 0x2, 0xe6, 0x1c, 0xb, 0x0,
    0x14, 0x8c, 0xe0, 0x4, 0x97, 0x50, 0x1, 0x53,
    0x38, 0x1, 0x24, 0xb0, 0x1, 0x48, 0xb, 0x98,
    0x80,

    /* U+00DC "Ü" */
    0x5, 0x53, 0x98, 0x33, 0x80, 0x25, 0x19, 0xc0,
    0x12, 0x8c, 0xe0, 0x9, 0x46, 0x70, 0x4, 0xa3,
    0x38, 0x2, 0x4c, 0xd4, 0x0, 0xc1, 0x8, 0xbc,
    0x60,

    /* U+00DF "ß" */
    0xb, 0xb4, 0x2, 0xc0, 0x68, 0x33, 0xa, 0xc1,
    0x98, 0xb2, 0xc, 0xc0, 0xa6, 0x68, 0x1, 0xac,
    0xca, 0xa4, 0x0,

    /* U+00E4 "ä" */
    0xa, 0xa, 0x0, 0xfa, 0xae, 0x80, 0x90, 0x28,
    0xc2, 0x65, 0xa6, 0xec, 0x14, 0x66, 0xcb, 0xb2,
    0x0,

    /* U+00F6 "ö" */
    0xa, 0xa, 0x0, 0xfa, 0xae, 0x85, 0x9c, 0x16,
    0x24, 0xc0, 0x6d, 0x98, 0xb, 0x1, 0x57, 0x60,

    /* U+00FC "ü" */
    0xa, 0xa, 0x0, 0xf3, 0x30, 0x1d, 0x59, 0x80,
    0xea, 0xcc, 0x7, 0x55, 0x38, 0x42, 0x8e, 0x5e,
    0x28,

    /* U+2022 "•" */
    0x3e, 0x33, 0x71, 0x80
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 36, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 37, .box_w = 2, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 8, .adv_w = 46, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 12, .adv_w = 89, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 33, .adv_w = 81, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 56, .adv_w = 105, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 80, .adv_w = 90, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 100, .adv_w = 25, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 103, .adv_w = 49, .box_w = 3, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 120, .adv_w = 50, .box_w = 3, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 137, .adv_w = 62, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 145, .adv_w = 82, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 157, .adv_w = 28, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 160, .adv_w = 40, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 162, .adv_w = 38, .box_w = 2, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 163, .adv_w = 59, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 178, .adv_w = 81, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 196, .adv_w = 81, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 211, .adv_w = 81, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 229, .adv_w = 81, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 246, .adv_w = 81, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 264, .adv_w = 81, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 281, .adv_w = 81, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 299, .adv_w = 81, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 316, .adv_w = 81, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 333, .adv_w = 81, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 351, .adv_w = 35, .box_w = 2, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 355, .adv_w = 30, .box_w = 2, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 361, .adv_w = 73, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 371, .adv_w = 79, .box_w = 5, .box_h = 3, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 377, .adv_w = 75, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 388, .adv_w = 68, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 402, .adv_w = 129, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 437, .adv_w = 94, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 458, .adv_w = 90, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 480, .adv_w = 94, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 502, .adv_w = 94, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 524, .adv_w = 82, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 541, .adv_w = 80, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 558, .adv_w = 98, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 579, .adv_w = 103, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 601, .adv_w = 39, .box_w = 2, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 608, .adv_w = 79, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 625, .adv_w = 90, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 647, .adv_w = 77, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 664, .adv_w = 126, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 693, .adv_w = 103, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 715, .adv_w = 99, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 737, .adv_w = 91, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 758, .adv_w = 99, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 784, .adv_w = 89, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 806, .adv_w = 85, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 824, .adv_w = 86, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 843, .adv_w = 93, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 865, .adv_w = 92, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 886, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 915, .adv_w = 90, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 936, .adv_w = 86, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 956, .adv_w = 86, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 975, .adv_w = 38, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 989, .adv_w = 59, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1003, .adv_w = 38, .box_w = 2, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1012, .adv_w = 60, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 1021, .adv_w = 65, .box_w = 5, .box_h = 1, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1024, .adv_w = 45, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1027, .adv_w = 78, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1040, .adv_w = 81, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1057, .adv_w = 75, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1070, .adv_w = 81, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1088, .adv_w = 76, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1101, .adv_w = 50, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1115, .adv_w = 81, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1133, .adv_w = 79, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1151, .adv_w = 35, .box_w = 2, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1159, .adv_w = 34, .box_w = 3, .box_h = 9, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 1172, .adv_w = 73, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1189, .adv_w = 35, .box_w = 2, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1196, .adv_w = 126, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1217, .adv_w = 79, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1230, .adv_w = 82, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1243, .adv_w = 81, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1261, .adv_w = 82, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1278, .adv_w = 49, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1288, .adv_w = 74, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1301, .adv_w = 47, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1311, .adv_w = 79, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1324, .adv_w = 70, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1337, .adv_w = 108, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1354, .adv_w = 71, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1367, .adv_w = 68, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1384, .adv_w = 71, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1397, .adv_w = 49, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1411, .adv_w = 35, .box_w = 2, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1419, .adv_w = 49, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1433, .adv_w = 98, .box_w = 6, .box_h = 2, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 1440, .adv_w = 144, .box_w = 9, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1455, .adv_w = 144, .box_w = 9, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1471, .adv_w = 144, .box_w = 5, .box_h = 9, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 1491, .adv_w = 144, .box_w = 5, .box_h = 8, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1508, .adv_w = 144, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1525, .adv_w = 144, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1542, .adv_w = 144, .box_w = 7, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1559, .adv_w = 144, .box_w = 7, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1576, .adv_w = 144, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1605, .adv_w = 144, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1626, .adv_w = 144, .box_w = 7, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1647, .adv_w = 144, .box_w = 7, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1668, .adv_w = 144, .box_w = 6, .box_h = 7, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 1689, .adv_w = 144, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1719, .adv_w = 144, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1739, .adv_w = 144, .box_w = 6, .box_h = 7, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1761, .adv_w = 135, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1778, .adv_w = 144, .box_w = 7, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1799, .adv_w = 144, .box_w = 7, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1817, .adv_w = 144, .box_w = 6, .box_h = 6, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 1836, .adv_w = 144, .box_w = 5, .box_h = 6, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 1850, .adv_w = 54, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 1855, .adv_w = 94, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1879, .adv_w = 99, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1904, .adv_w = 93, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1929, .adv_w = 86, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1948, .adv_w = 78, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1965, .adv_w = 82, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1981, .adv_w = 79, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1998, .adv_w = 49, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 2}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_2[] = {
    0x0, 0x14, 0x26, 0x2c, 0x2f, 0x34, 0x46, 0x4c,
    0x1f72
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 128, .range_length = 21, .glyph_id_start = 96,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 176, .range_length = 8051, .glyph_id_start = 117,
        .unicode_list = unicode_list_2, .glyph_id_ofs_list = NULL, .list_length = 9, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Map glyph_ids to kern left classes*/
static const uint8_t kern_left_class_mapping[] =
{
    0, 1, 0, 2, 0, 0, 0, 0,
    2, 3, 0, 0, 0, 4, 0, 4,
    5, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 6, 7, 8, 9, 10, 11,
    0, 12, 12, 13, 14, 15, 12, 12,
    9, 16, 17, 18, 0, 19, 13, 20,
    21, 22, 23, 24, 25, 0, 0, 0,
    0, 0, 26, 27, 28, 0, 29, 30,
    0, 31, 0, 0, 32, 0, 31, 31,
    33, 27, 0, 34, 0, 35, 0, 36,
    37, 38, 36, 39, 40, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 6, 9,
    13, 0, 26, 33, 0, 0
};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
{
    0, 1, 0, 2, 0, 0, 0, 3,
    2, 0, 4, 5, 0, 6, 7, 6,
    8, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    9, 0, 10, 0, 11, 0, 0, 0,
    11, 0, 0, 12, 0, 0, 0, 0,
    11, 0, 11, 0, 13, 14, 15, 16,
    17, 18, 19, 20, 0, 0, 21, 0,
    0, 0, 22, 0, 23, 23, 23, 24,
    23, 0, 0, 0, 0, 0, 25, 25,
    26, 25, 23, 27, 28, 29, 30, 31,
    32, 33, 31, 34, 0, 0, 35, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 10, 11,
    15, 0, 22, 26, 30, 36
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -8, 0, 0,
    0, 0, 0, 0, 0, -8, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -4, -4, 0, -1, -4, 0, -6,
    0, 0, 0, 1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 1,
    1, 0, 2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -12, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -16,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -8, 0, 0,
    0, 0, 0, 0, -4, 0, -1, 0,
    0, -9, -1, -6, -5, 0, -7, 0,
    0, 0, 0, 0, 0, -1, 0, 0,
    -1, -1, -4, -2, 0, 1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -2, 0, -2,
    0, 0, -4, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, 0, 0, 0, 0, 0,
    -1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -1, 0,
    0, 0, 0, 0, 0, -7, 0, 0,
    0, -1, 0, 0, 0, -2, 0, -2,
    0, -2, -3, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 1, 0, 0, 0, 0, 0, 0,
    0, 0, -1, -1, 0, -1, 0, 0,
    0, -1, -2, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -16, 0, 0,
    0, -12, 0, -19, 0, 1, 0, 0,
    0, 0, 0, 0, 0, -2, -1, 0,
    0, -1, -2, 0, 0, -2, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 1, 0, 0,
    0, -2, 0, 0, 0, 1, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -4, 0, 0, 0, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -2, 0, -2, -2, 0, 0,
    0, -2, -3, -4, 0, 0, 0, 0,
    0, -24, 0, 0, 0, 0, 0, 0,
    0, 1, -5, 0, 0, -19, -4, -12,
    -10, 0, -17, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -3, -9, -6,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -23, 0, 0, 0, -10, 0, -14,
    0, 0, 0, 0, 0, -2, 0, -2,
    0, -1, -1, 0, 0, -1, 0, 0,
    1, 0, 1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -3, 0, -2,
    -1, 0, -2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -6, 0, -1, 0, 0, -3, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -3, 0, 0, 0, 0, -15, -16, 0,
    0, -6, -2, -17, -1, 1, 0, 1,
    1, 0, 1, 0, 0, -8, -7, 0,
    -8, -7, -5, -8, 0, -7, -5, -4,
    -5, -4, 0, 0, 0, 0, 0, 1,
    0, -16, -3, 0, 0, -5, -1, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    1, -3, -3, 0, 0, -3, -2, 0,
    0, -2, -1, 0, 0, 0, 1, 0,
    0, 0, 0, 1, 0, -9, -4, 0,
    0, -3, 0, 0, 0, 1, 0, 0,
    0, 0, 0, 0, 1, -2, -2, 0,
    0, -2, -1, 0, 0, -1, 0, 0,
    0, 0, 1, 0, 0, 0, 0, 0,
    0, 0, -3, 0, 0, 0, -2, 0,
    0, 0, 0, 1, 0, 0, 0, 0,
    0, 0, -2, 0, 0, -1, 0, 0,
    0, -1, -2, 0, 0, 0, 0, 0,
    0, 0, -2, 1, -3, -15, -4, 0,
    0, -7, -2, -7, -1, 1, -7, 1,
    1, 1, 1, 0, 1, -5, -5, -2,
    -3, -5, -3, -4, -2, -3, -1, 0,
    -2, -2, 1, -3, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 1, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -1, 0, 0, -1, 0, 0,
    0, -1, -2, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -1, 0, 0, -1, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -5, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -1, 0, 0, 0, 0, 0,
    0, -2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -1, 0,
    -1, -1, 0, 0, 0, -1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -1, 0,
    0, 0, 0, 0, 0, 1, 0, 1,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    1, 0, -2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 1, 0,
    0, -7, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -10, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -1, 0,
    -1, -1, 0, 0, 0, 1, 0, 0,
    0, -9, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -3, -1, 1, 0, -1, 0, 0,
    4, 0, 1, 1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 1, 0, 0,
    0, -8, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -1, -1, 1, 0, -1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -9, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -1, 0, 0, -1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -1, 0,
    0, -1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -1,
    0, 0, -1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0
};


/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 40,
    .right_class_cnt     = 36,
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_classes,
    .kern_scale = 16,
    .cmap_num = 3,
    .bpp = 4,
    .kern_classes = 1,
    .bitmap_format = 2,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t lv_font_roboto_9 = {
#else
lv_font_t lv_font_roboto_9 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 11,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 0,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if LV_FONT_ROBOTO_9*/

