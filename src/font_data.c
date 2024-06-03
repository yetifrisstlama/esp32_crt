#include "font_data.h"

// -----------------------------------
//  SCTV scope clock font
// -----------------------------------
// Nice simplistic font using arcs and line segments.
// Originally appeared in the scope clock from nixiebunny.
// https://github.com/nixiebunny/SCTVcode/blob/main/SCTVcode/b_font.ino

static const uint8_t glyphs_arc[1518] = {
240, 15,  1,  6, 27,  0, 14, 67,  0, 19,  2,  2,109,240, 11,  0, 12, 27,  0,  8,  7,  6,  8, 27,
  0,  8,240, 15,  2,  4, 31,  2, 16,  7,  3, 16, 31,  2, 16,  3,  9, 11, 23, 10,  0, 11,  9,  6,
 23, 10,  0,240, 79,  5,  8, 10,  8, 73, 75,  0,  8, 10,  8,  5,  3,  0, 16, 27,  0, 24,240, 79,
  3, 17,  6,  6,109, 71,  6, 14,  6,  6,109,  3,  9,  3, 31, 12, 20,240, 79,  4, 15,  8, 10,108,
 67,  0, 10,  8, 10, 37, 75,  0,  3, 16, 16,103, 11,  3,  4, 23, 10, 12,240, 79,  3, 19,  2,  2,
109, 67,  3,  0,  8, 12,103,240, 79,  4, 10,  8, 20, 37,240, 75,  0, 10,  8, 20,105,240, 11,  0,
 10, 23, 12,  0,  3, 10,  6, 31,  8, 12,  3,  8,  0, 23,  8, 12,240, 11,  0, 10, 23, 12,  0,  3,
  6,  6, 27,  0, 12,240, 79,  3,  1,  2,  2,109, 67,  3,  0,  8, 12,103,240, 11,  0, 10, 23, 12,
  0,240, 79,  1,  1,  2,  2,109,240,  3,  0,  0, 31, 12, 20,240, 79,  6, 10, 12, 20,109,240,  7,
  7,  0, 27,  0, 20,  3,  4,  4, 31,  4,  4,240, 79,  6, 14, 12, 12,107, 67,  0, 14, 12, 16, 35,
  3,  6,  0, 23, 12,  0,240, 79,  6,  6, 12, 12, 89, 11,  5, 14, 23, 10,  0,  3,  5,  8, 31,  5,
  8,240,  7,  8,  0, 27,  0, 20,  3,  8, 14, 23, 12,  0,  3, 12,  0, 31,  8, 14,240, 79,  6,  6,
 12, 12, 90, 11,  4,  4, 31,  2, 10,  3,  0,  0, 23,  8,  0,240, 79,  6,  6, 12, 12,109, 11,  5,
  4, 31,  7, 10,240,  3,  0,  0, 31, 12, 20,  3, 12,  0, 23, 12,  0,240, 79,  6,  6, 12, 12,109,
 75,  0, 10,  8,  8,109,240, 79,  6, 14, 12, 12,109,  3,  2, 14, 31,  7, 10,240, 79,  2,  6,  4,
  4,109, 75,  0,  8,  4,  4,109,240, 79,  3, 14,  2,  2,109, 67,  0,  8,  2,  2,109, 67,  3,  0,
  8, 12,103,240, 11,  0, 10, 31, 12,  8,  3, 12,  8, 23, 12,  8,240, 11,  0, 13, 23, 12,  0,  3,
 12,  6, 23, 12,  0,240, 11,  0, 18, 23, 12,  8,  3, 12,  8, 31, 12,  8,240, 79,  5, 14, 10, 10,
107, 67,  0,  7,  4,  4, 39, 67,  0,  6,  2,  2,109,240, 79,  3, 10,  6, 10,109, 67,  0,  0, 14,
 20,  6, 71,  5,  0,  4,  4, 71,240,  3,  0,  0, 31,  6, 20,  3,  0,  0, 23,  6, 20, 11,  9,  8,
 23,  6,  0,240,  3,  0,  0, 27,  0, 20,  3,  0, 20, 23,  8,  0, 11,  8, 10, 23,  8,  0, 11,  8,
 10, 23,  8,  0, 67,  0, 15, 10, 10,105, 75,  0, 10, 10, 10,105,240, 79,  7, 10, 14, 20, 22,240,
  3,  0,  0, 27,  0, 20,  3,  0, 20, 23,  4,  0, 11,  4, 20, 23,  4,  0, 67,  0, 10, 16, 20,105,
240,  3,  0,  0, 27,  0, 20,  3,  0, 20, 23, 12,  0, 11, 12, 10, 23,  8,  0, 11,  8, 10, 23, 12,
  0,240,  3,  0,  0, 27,  0, 20,  3,  0, 10, 23,  8,  0, 11,  8, 10, 23, 12,  0,240, 79,  7, 10,
 14, 20, 22,  7,  4,  8, 27,  0,  6,  3,  4,  0, 23,  4,  0,240,  3,  0,  0, 27,  0, 20,  7, 12,
 20, 27,  0, 20,  3, 12, 10, 23, 12,  0,240,  7,  2,  0, 27,  0, 20,  3,  1, 20, 23,  4,  0, 11,
  4, 20, 23,  4,  0,240, 15, 12,  6, 27,  0, 14, 67,  6, 14, 12, 12, 71,240,  3,  0,  0, 27,  0,
 20,  3,  0, 10, 23, 12, 10, 11, 12, 10, 31, 12, 10,240,  3,  0,  0, 27,  0, 20,  3,  0, 20, 23,
 12,  0,240,  3,  0,  0, 27,  0, 20,  7, 12, 20, 27,  0, 20,  3, 12,  0, 23,  6, 10,  3,  0,  0,
 31,  6, 10,240,  3,  0,  0, 27,  0, 20,  7, 12, 20, 27,  0, 20,  3, 12,  0, 23, 12, 20,240, 79,
  6, 10, 12, 20,109,240,  3,  0,  0, 27,  0, 20,  3,  0, 10, 23,  8,  0, 11,  8, 10, 23,  8,  0,
 67,  0,  5, 10, 10,105,240, 79,  6, 10, 12, 20,109,  7,  2,  4, 23,  4,  6,240,  3,  0,  0, 27,
  0, 20,  3,  0, 10, 23,  8,  0, 11,  8, 10, 23,  8,  0, 67,  0,  5, 10, 10,105,  3,  2,  5, 23,
  6, 10,240, 79,  6,  5, 12, 10, 73, 75,  0, 10, 12, 10,  5,240,  7,  6,  0, 27,  0, 20,  3,  6,
  0, 23, 12,  0,240, 11,  0,  6, 27,  0, 14,  7, 12, 14, 27,  0, 14, 67,  6, 14, 12, 12, 71,240,
 11,  0, 20, 23,  6, 20,  3,  0,  0, 31,  6, 20,240,  3,  0,  0, 27,  0, 20,  7, 12, 20, 27,  0,
 20,  3, 12, 20, 31,  6, 10,  3,  0,  0, 23,  6, 10,240, 11,  0, 20, 23, 12, 20,  3, 12,  0, 31,
 12, 20,240,  7,  6,  0, 27,  0, 10, 11,  6, 10, 23,  6, 10,  3,  0,  0, 31,  6, 10,240,  3,  0,
  0, 31, 12, 20,  3, 12, 20, 23, 12,  0, 11, 12, 20, 23, 12,  0,240,  3,  0,  0, 27,  0, 20,  3,
  0, 20, 23,  4,  0, 11,  4, 20, 23,  4,  0,240, 11,  0, 20, 23, 12, 20,240,  7,  4,  0, 27,  0,
 20,  3,  4, 20, 23,  4,  0, 11,  4, 20, 23,  4,  0,240, 11,  0, 10, 31,  6,  6,  3,  0,  0, 23,
  6,  6,240,  3,  0,  0, 23, 12,  0,240, 11,  0, 20, 23,  4,  8,240, 79,  5,  6, 10, 12,109,  7,
  5,  6, 27,  0, 12,240, 79,  5,  6, 10, 12,109,  3,  5,  6, 27,  0, 20,240, 79,  5,  6, 10, 12,
 22,240, 79,  5,  6, 10, 12,109,  7,  5,  6, 27,  0, 20,240, 79,  5,  6, 10, 12,  6,  3,  5,  0,
 23, 10,  0,240, 79,  7, 16,  6,  8,  3,  3,  7,  6, 23,  8,  0,  3,  4, 10, 27,  0, 16,240, 79,
  5,  6, 10, 12,109,  7,  5,  6, 27,  0, 12, 67,  5, 12, 10, 12, 87,240, 79,  4,  8,  8,  8,  3,
  3,  4,  8, 27,  0, 20,  7,  8, 20, 27,  0,  8,240, 79,  1, 16,  2,  2,109,  3,  0, 16, 27,  0,
 12,240, 79,  6, 16,  2,  2,109,  3,  0, 16, 27,  0, 12, 67,  3, 12,  6,  8, 87,240,  3,  0,  0,
 27,  0, 20,  3,  0, 16, 31,  8,  8,  3,  7,  6, 23,  6,  6,240,  7,  1,  0, 27,  0, 20,240,  3,
  0,  0, 27,  0, 12, 71,  4,  4,  8,  8,  3,  7,  4,  8, 27,  0,  8, 71,  4,  0,  8,  8,  3,  7,
  4,  8, 27,  0,  8,240,  3,  0,  0, 27,  0, 12, 71,  4,  4,  8,  8,  3,  7,  4,  8, 27,  0,  8,
240, 79,  5,  6, 10, 12,109,240, 79,  5,  6, 10, 12,109,  3,  5, 10, 27,  0, 16,240, 79,  5,  6,
 10, 12,109,  7,  5, 10, 27,  0, 16,240,  3,  0,  0, 27,  0, 12, 71,  5,  6, 10, 12, 19,240, 79,
  4,  9,  8,  6,  5, 67,  0,  6,  8,  6, 73,240, 11,  0, 12, 23,  8,  0,  3,  4, 12, 27,  0, 16,
240,  7,  8,  0, 27,  0, 12, 67,  4,  8,  8,  8, 71,  3,  4,  0, 27,  0,  8,240, 11,  0, 12, 23,
  4, 12,  3,  0,  0, 31,  4, 12,240, 11,  0, 12, 23,  4, 12,  3,  0,  0, 31,  4, 12,  3,  0,  0,
 23,  4, 12,  3,  0,  0, 31,  4, 12,240, 11,  0, 12, 23,  8, 12,  3,  8,  0, 31,  8, 12,240, 11,
  0, 12, 23,  4, 12,  3,  0,  0, 31,  4, 12, 67,  7, 12,  6,  8,103,240,  3,  0,  0, 23,  8,  0,
 11,  8, 12, 23,  8,  0,  3,  8, 12, 31,  8, 12,240, 79,  8,  6,  8, 12, 69, 67,  8,  0,  8,  8,
  1, 75,  0,  8,  8,  8,103, 71,  8,  0,  8, 12, 35,240, 15,  1,  1, 27,  0, 20,240, 75,  0,  6,
  8, 12,103, 71,  8,  0,  8,  8, 35, 75,  0,  8,  8,  8, 69, 67,  8,  0,  8, 12,  1,240, 79,  3,
 12,  6,  4,  3, 71,  6,  0,  6,  4, 71,240, 11,  0, 10, 31,  6, 10,  3,  6, 20, 31, 12, 20,  3,
  6, 20, 31,  6, 10,240
};

// GLYPH DESCRIPTION
static const glyph_dsc_t glyph_dsc_arc[96] = {
    {.start_index =    0, .adv_w =    9, .box_w =    0, .box_h =    0},
    {.start_index =    1, .adv_w =    5, .box_w =    4, .box_h =   21},
    {.start_index =   14, .adv_w =    9, .box_w =    6, .box_h =    8},
    {.start_index =   27, .adv_w =   15, .box_w =   11, .box_h =   16},
    {.start_index =   52, .adv_w =   13, .box_w =   20, .box_h =   24},
    {.start_index =   71, .adv_w =   15, .box_w =   18, .box_h =   26},
    {.start_index =   90, .adv_w =   15, .box_w =   32, .box_h =   33},
    {.start_index =  115, .adv_w =    7, .box_w =   16, .box_h =   24},
    {.start_index =  128, .adv_w =    7, .box_w =   16, .box_h =   40},
    {.start_index =  135, .adv_w =    7, .box_w =   16, .box_h =   40},
    {.start_index =  142, .adv_w =   15, .box_w =   12, .box_h =   12},
    {.start_index =  161, .adv_w =   15, .box_w =   12, .box_h =   12},
    {.start_index =  174, .adv_w =    7, .box_w =   16, .box_h =   24},
    {.start_index =  187, .adv_w =   15, .box_w =   12, .box_h =    0},
    {.start_index =  194, .adv_w =    5, .box_w =    4, .box_h =    4},
    {.start_index =  201, .adv_w =   15, .box_w =   12, .box_h =   20},
    {.start_index =  208, .adv_w =   15, .box_w =   24, .box_h =   40},
    {.start_index =  215, .adv_w =   15, .box_w =    4, .box_h =   20},
    {.start_index =  228, .adv_w =   15, .box_w =   24, .box_h =   42},
    {.start_index =  247, .adv_w =   15, .box_w =   24, .box_h =   26},
    {.start_index =  266, .adv_w =   15, .box_w =   12, .box_h =   20},
    {.start_index =  285, .adv_w =   15, .box_w =   24, .box_h =   26},
    {.start_index =  304, .adv_w =   15, .box_w =   24, .box_h =   26},
    {.start_index =  317, .adv_w =   15, .box_w =   12, .box_h =   20},
    {.start_index =  330, .adv_w =   15, .box_w =   24, .box_h =   30},
    {.start_index =  343, .adv_w =   15, .box_w =   24, .box_h =   26},
    {.start_index =  356, .adv_w =    7, .box_w =    8, .box_h =   16},
    {.start_index =  369, .adv_w =    7, .box_w =   16, .box_h =   24},
    {.start_index =  388, .adv_w =   15, .box_w =   12, .box_h =   16},
    {.start_index =  401, .adv_w =   15, .box_w =   12, .box_h =    6},
    {.start_index =  414, .adv_w =   15, .box_w =   12, .box_h =   16},
    {.start_index =  427, .adv_w =   13, .box_w =   20, .box_h =   25},
    {.start_index =  446, .adv_w =   15, .box_w =   28, .box_h =   40},
    {.start_index =  465, .adv_w =   15, .box_w =   12, .box_h =   20},
    {.start_index =  484, .adv_w =   15, .box_w =   20, .box_h =   30},
    {.start_index =  521, .adv_w =   15, .box_w =   28, .box_h =   40},
    {.start_index =  528, .adv_w =   15, .box_w =   32, .box_h =   40},
    {.start_index =  553, .adv_w =   15, .box_w =   12, .box_h =   20},
    {.start_index =  578, .adv_w =   15, .box_w =   12, .box_h =   20},
    {.start_index =  597, .adv_w =   15, .box_w =   28, .box_h =   40},
    {.start_index =  616, .adv_w =   15, .box_w =   12, .box_h =   20},
    {.start_index =  635, .adv_w =    7, .box_w =    4, .box_h =   20},
    {.start_index =  654, .adv_w =   15, .box_w =   24, .box_h =   26},
    {.start_index =  667, .adv_w =   15, .box_w =   12, .box_h =   20},
    {.start_index =  686, .adv_w =   15, .box_w =   12, .box_h =   20},
    {.start_index =  699, .adv_w =   15, .box_w =   12, .box_h =   20},
    {.start_index =  724, .adv_w =   15, .box_w =   12, .box_h =   20},
    {.start_index =  743, .adv_w =   15, .box_w =   24, .box_h =   40},
    {.start_index =  750, .adv_w =   15, .box_w =   20, .box_h =   25},
    {.start_index =  775, .adv_w =   15, .box_w =   24, .box_h =   40},
    {.start_index =  788, .adv_w =   15, .box_w =   20, .box_h =   25},
    {.start_index =  819, .adv_w =   15, .box_w =   24, .box_h =   30},
    {.start_index =  832, .adv_w =   15, .box_w =   12, .box_h =   20},
    {.start_index =  845, .adv_w =   15, .box_w =   24, .box_h =   26},
    {.start_index =  864, .adv_w =   15, .box_w =   12, .box_h =   20},
    {.start_index =  877, .adv_w =   15, .box_w =   12, .box_h =   20},
    {.start_index =  902, .adv_w =   15, .box_w =   12, .box_h =   20},
    {.start_index =  915, .adv_w =   15, .box_w =   12, .box_h =   20},
    {.start_index =  934, .adv_w =   15, .box_w =   12, .box_h =   20},
    {.start_index =  953, .adv_w =    7, .box_w =    4, .box_h =   20},
    {.start_index =  972, .adv_w =   15, .box_w =   12, .box_h =   20},
    {.start_index =  979, .adv_w =    7, .box_w =    4, .box_h =   20},
    {.start_index =  998, .adv_w =   15, .box_w =   12, .box_h =    6},
    {.start_index = 1011, .adv_w =   15, .box_w =   12, .box_h =    0},
    {.start_index = 1018, .adv_w =    7, .box_w =    4, .box_h =    8},
    {.start_index = 1025, .adv_w =   13, .box_w =   20, .box_h =   24},
    {.start_index = 1038, .adv_w =   13, .box_w =   20, .box_h =   26},
    {.start_index = 1051, .adv_w =   11, .box_w =   20, .box_h =   24},
    {.start_index = 1058, .adv_w =   13, .box_w =   20, .box_h =   26},
    {.start_index = 1071, .adv_w =   13, .box_w =   20, .box_h =   24},
    {.start_index = 1084, .adv_w =   13, .box_w =   13, .box_h =   24},
    {.start_index = 1103, .adv_w =   13, .box_w =   20, .box_h =   30},
    {.start_index = 1122, .adv_w =   11, .box_w =   16, .box_h =   20},
    {.start_index = 1141, .adv_w =    5, .box_w =    4, .box_h =   18},
    {.start_index = 1154, .adv_w =   11, .box_w =   12, .box_h =   26},
    {.start_index = 1173, .adv_w =   11, .box_w =    8, .box_h =   20},
    {.start_index = 1192, .adv_w =    5, .box_w =    0, .box_h =   20},
    {.start_index = 1199, .adv_w =   19, .box_w =   24, .box_h =   16},
    {.start_index = 1230, .adv_w =   11, .box_w =   16, .box_h =   16},
    {.start_index = 1249, .adv_w =   13, .box_w =   20, .box_h =   24},
    {.start_index = 1256, .adv_w =   13, .box_w =   20, .box_h =   24},
    {.start_index = 1269, .adv_w =   13, .box_w =   20, .box_h =   24},
    {.start_index = 1282, .adv_w =   11, .box_w =   20, .box_h =   24},
    {.start_index = 1295, .adv_w =   11, .box_w =   16, .box_h =   18},
    {.start_index = 1308, .adv_w =   11, .box_w =    8, .box_h =   16},
    {.start_index = 1321, .adv_w =   11, .box_w =   16, .box_h =   16},
    {.start_index = 1340, .adv_w =   11, .box_w =    8, .box_h =   12},
    {.start_index = 1353, .adv_w =   19, .box_w =   16, .box_h =   12},
    {.start_index = 1378, .adv_w =   11, .box_w =    8, .box_h =   12},
    {.start_index = 1391, .adv_w =   11, .box_w =   13, .box_h =   20},
    {.start_index = 1410, .adv_w =   11, .box_w =    8, .box_h =   12},
    {.start_index = 1429, .adv_w =   11, .box_w =   24, .box_h =   32},
    {.start_index = 1454, .adv_w =    5, .box_w =    0, .box_h =   20},
    {.start_index = 1461, .adv_w =   11, .box_w =   24, .box_h =   32},
    {.start_index = 1486, .adv_w =   15, .box_w =   18, .box_h =    8},
    {.start_index = 1499, .adv_w =   15, .box_w =   12, .box_h =   20},
};

const font_t f_arc = {
    .n_glyphs = 96,
    .glyphs = glyphs_arc,
    .glyph_dsc = glyph_dsc_arc,
};

const font_t* f_all[] = {
	&f_arc
};
