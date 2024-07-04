#include <stdint.h>
#include <stdio.h>
#include <font_draw.h>
// -----------------------------------
//  Hershey font, romans
// -----------------------------------

static const uint8_t glyphs_romans[3037] = {
 15,  5, 12, 18, 14,  2,  5, 19,  1,  1, 23,  1,  1, 31,  1,  1, 27,  1,  1, 15,  4, 12, 18,  7,
 15,  8,  7, 18,  7, 15, 11, 16, 19,  7, 32, 15, 13, 32, 19,  7, 32, 11,  6, 19, 21, 14,  3, 15,
  6, 21, 14, 15,  8, 16, 18, 29, 15,  4, 29, 18, 29, 15,  5, 22, 27,  2,  2, 27,  3,  1, 17,  4,
 19,  3,  1, 19,  2,  2, 18,  2, 23,  1,  2, 23,  1,  1, 23,  2,  1, 23,  6,  2, 23,  2,  1, 23,
  1,  1, 23,  1,  2, 18,  3, 19,  2,  2, 19,  3,  1, 17,  4, 27,  3,  1, 27,  2,  2, 15, 21, 12,
 19, 18, 21, 15,  5, 21, 23,  2,  2, 18,  2, 19,  1,  2, 19,  2,  1, 17,  2, 27,  2,  2, 26,  2,
 31,  1,  2, 31,  2,  1, 21,  2, 23,  2,  1, 23,  3,  1, 21,  3, 31,  3,  1, 31,  2,  1,  3,  4,
 14, 19,  2,  1, 19,  1,  2, 18,  2, 23,  2,  2, 21,  2, 31,  2,  1, 31,  1,  2, 26,  2, 27,  2,
  2, 17,  2, 15, 23,  3, 26,  1, 27,  1,  1, 17,  1, 19,  1,  1, 19,  1,  2, 19,  2,  5, 19,  2,
  3, 19,  2,  2, 19,  2,  1, 17,  4, 27,  2,  1, 27,  1,  1, 27,  1,  2, 26,  2, 31,  1,  2, 31,
  1,  1, 31,  7,  4, 31,  1,  1, 31,  1,  2, 26,  2, 27,  1,  2, 27,  2,  1, 19,  2,  1, 19,  1,
  2, 18,  2, 23,  1,  3, 23,  2,  3, 23,  5,  7, 23,  2,  2, 23,  2,  1, 21,  2, 31,  1,  1, 26,
  1, 15,  5, 10, 27,  1,  1, 31,  1,  1, 23,  1,  1, 18,  2, 19,  1,  2, 19,  1,  1, 15, 11, 16,
 19,  2,  2, 19,  2,  3, 19,  2,  4, 19,  1,  5, 18,  4, 23,  1,  5, 23,  2,  4, 23,  2,  3, 23,
  2,  2, 15,  3, 16, 23,  2,  2, 23,  2,  3, 23,  2,  4, 23,  1,  5, 18,  4, 19,  1,  5, 19,  2,
  4, 19,  2,  3, 19,  2,  2, 15,  8, 12, 18, 12, 11,  5,  9, 23, 10,  6, 10,  6, 19, 10,  6, 15,
 13,  9, 18, 18, 11,  9,  9, 21, 18,  7,  6,  8, 19,  1,  1, 27,  1,  1, 31,  1,  1, 23,  1,  1,
 18,  2, 19,  1,  2, 19,  1,  1,  5,  4, 21, 18,  7,  5,  7, 19,  1,  1, 23,  1,  1, 31,  1,  1,
 27,  1,  1, 15, 20, 16, 19, 18, 32, 15,  9, 12, 19,  3,  1, 19,  2,  3, 19,  1,  5, 18,  3, 23,
  1,  5, 23,  2,  3, 23,  3,  1, 21,  2, 31,  3,  1, 31,  2,  3, 31,  1,  5, 26,  3, 27,  1,  5,
 27,  2,  3, 27,  3,  1, 17,  2, 15,  6,  8, 31,  2,  1, 31,  3,  3, 18, 21, 15,  4,  7, 26,  1,
 31,  1,  2, 31,  1,  1, 31,  2,  1, 21,  4, 23,  2,  1, 23,  1,  1, 23,  1,  2, 18,  2, 19,  1,
  2, 19,  2,  3, 19, 10, 10, 21, 14, 15,  5, 12, 21, 11, 19,  6,  8, 21,  3, 23,  2,  1, 23,  1,
  1, 23,  1,  3, 18,  2, 19,  1,  3, 19,  2,  2, 19,  3,  1, 17,  3, 27,  3,  1, 27,  1,  1, 27,
  1,  2, 15, 13, 12, 19, 10, 14, 21, 15, 11,  5, 14, 18, 21, 15, 15, 12, 17, 10, 19,  1,  9, 31,
  1,  1, 31,  3,  1, 21,  3, 23,  3,  1, 23,  2,  2, 23,  1,  3, 18,  2, 19,  1,  3, 19,  2,  2,
 19,  3,  1, 17,  3, 27,  3,  1, 27,  1,  1, 27,  1,  2, 15, 16,  9, 27,  1,  2, 27,  3,  1, 17,
  2, 19,  3,  1, 19,  2,  3, 19,  1,  5, 18,  5, 23,  1,  4, 23,  2,  2, 23,  3,  1, 21,  1, 31,
  3,  1, 31,  2,  2, 31,  1,  3, 26,  1, 27,  1,  3, 27,  2,  2, 27,  3,  1, 17,  1, 19,  3,  1,
 19,  2,  2, 19,  1,  3, 15, 17, 12, 19, 10, 21, 11,  4, 21, 21, 14, 15,  8, 12, 19,  3,  1, 19,
  1,  2, 18,  2, 23,  1,  2, 23,  2,  1, 23,  4,  1, 23,  3,  1, 23,  2,  2, 23,  1,  2, 18,  3,
 19,  1,  2, 19,  1,  1, 19,  3,  1, 17,  4, 27,  3,  1, 27,  1,  1, 27,  1,  2, 26,  3, 31,  1,
  2, 31,  2,  2, 31,  3,  1, 31,  4,  1, 31,  2,  1, 31,  1,  2, 26,  2, 27,  1,  2, 27,  3,  1,
 17,  4, 15, 16,  5, 19,  1,  3, 19,  2,  2, 19,  3,  1, 17,  1, 27,  3,  1, 27,  2,  2, 27,  1,
  3, 26,  1, 31,  1,  3, 31,  2,  2, 31,  3,  1, 21,  1, 23,  3,  1, 23,  2,  2, 23,  1,  4, 18,
  5, 19,  1,  5, 19,  2,  3, 19,  3,  1, 17,  2, 27,  3,  1, 27,  1,  2, 15,  5,  5, 19,  1,  1,
 23,  1,  1, 31,  1,  1, 27,  1,  1,  2, 12, 19,  1,  1, 23,  1,  1, 31,  1,  1, 27,  1,  1, 15,
  5,  5, 19,  1,  1, 23,  1,  1, 31,  1,  1, 27,  1,  1,  7,  1, 13, 19,  1,  1, 27,  1,  1, 31,
  1,  1, 23,  1,  1, 18,  2, 19,  1,  2, 19,  1,  1, 15, 20,  9, 19, 16,  9, 23, 16,  9, 15,  4,
  3, 21, 18,  3, 18,  6, 21, 18, 15,  4,  9, 23, 16,  9, 19, 16,  9, 15,  3,  7, 26,  1, 31,  1,
  2, 31,  1,  1, 31,  2,  1, 21,  4, 23,  2,  1, 23,  1,  1, 23,  1,  2, 18,  2, 19,  1,  2, 19,
  1,  1, 19,  4,  2, 18,  3,  2,  5, 19,  1,  1, 23,  1,  1, 31,  1,  1, 27,  1,  1, 15, 18,  4,
 27,  1,  2, 27,  2,  1, 17,  3, 19,  2,  1, 19,  1,  1, 19,  1,  3, 18,  3, 23,  1,  2, 23,  2,
  1, 21,  3, 31,  2,  1, 31,  1,  2, 11,  5,  8, 19,  2,  2, 19,  1,  3, 18,  3, 23,  1,  2, 23,
  1,  1, 15,  7, 11, 19,  1,  8, 18,  2, 23,  2,  1, 21,  2, 31,  2,  2, 31,  1,  3, 26,  2, 27,
  1,  3, 27,  1,  2, 27,  2,  2, 27,  2,  1, 27,  3,  1, 17,  3, 19,  3,  1, 19,  2,  1, 19,  2,
  2, 19,  1,  2, 19,  1,  3, 18,  3, 23,  1,  3, 23,  1,  2, 23,  2,  2, 23,  2,  1, 23,  3,  1,
 21,  3, 31,  3,  1, 31,  2,  1, 31,  1,  1, 11,  2, 13, 19,  1,  8, 18,  2, 23,  1,  1, 15,  9,
 12, 19,  8, 21, 15,  8, 21, 23,  8, 21, 11, 13,  7, 21, 10, 15,  4, 12, 18, 21, 10, 21, 21,  9,
 23,  3,  1, 23,  1,  1, 23,  1,  2, 18,  2, 19,  1,  2, 19,  1,  1, 19,  3,  1,  1,  9, 21,  9,
 23,  3,  1, 23,  1,  1, 23,  1,  2, 18,  3, 19,  1,  2, 19,  1,  1, 19,  3,  1, 17,  9, 15, 18,
  7, 27,  1,  2, 27,  2,  2, 27,  2,  1, 17,  4, 19,  2,  1, 19,  2,  2, 19,  1,  2, 19,  1,  3,
 18,  5, 23,  1,  3, 23,  1,  2, 23,  2,  2, 23,  2,  1, 21,  4, 31,  2,  1, 31,  2,  2, 31,  1,
  2, 15,  4, 12, 18, 21, 10, 21, 21,  7, 23,  3,  1, 23,  2,  2, 23,  1,  2, 23,  1,  3, 18,  5,
 19,  1,  3, 19,  1,  2, 19,  2,  2, 19,  3,  1, 17,  7, 15,  4, 12, 18, 21, 10, 21, 21, 13,  3,
 13, 10, 21,  8,  3,  8, 11, 21, 13, 15,  4, 12, 18, 21, 10, 21, 21, 13,  3, 13, 10, 21,  8, 15,
 18,  7, 27,  1,  2, 27,  2,  2, 27,  2,  1, 17,  4, 19,  2,  1, 19,  2,  2, 19,  1,  2, 19,  1,
  3, 18,  5, 23,  1,  3, 23,  1,  2, 23,  2,  2, 23,  2,  1, 21,  4, 31,  2,  1, 31,  2,  2, 31,
  1,  2, 26,  3,  1,  5, 21,  5, 15,  4, 12, 18, 21, 15, 14, 21, 18, 21, 11, 14, 11, 21, 14, 15,
  4, 12, 18, 21, 15, 12, 12, 18, 16, 19,  1,  3, 19,  1,  1, 19,  2,  1, 17,  2, 27,  2,  1, 27,
  1,  1, 27,  1,  3, 26,  2, 15,  4, 12, 18, 21, 15, 14, 21, 19, 14, 14, 15,  5,  5, 23,  9, 12,
 15,  4, 12, 18, 21,  0, 21, 12, 15,  4, 12, 18, 21, 10, 21, 23,  8, 21, 15,  8, 21, 19,  8, 21,
 15,  8, 21, 18, 21, 15,  4, 12, 18, 21, 10, 21, 23, 14, 21, 10, 21, 18, 21, 15,  9, 12, 19,  2,
  1, 19,  2,  2, 19,  1,  2, 19,  1,  3, 18,  5, 23,  1,  3, 23,  1,  2, 23,  2,  2, 23,  2,  1,
 21,  4, 31,  2,  1, 31,  2,  2, 31,  1,  2, 31,  1,  3, 26,  5, 27,  1,  3, 27,  1,  2, 27,  2,
  2, 27,  2,  1, 17,  4, 15,  4, 12, 18, 21, 10, 21, 21,  9, 23,  3,  1, 23,  1,  1, 23,  1,  2,
 18,  3, 19,  1,  2, 19,  1,  1, 19,  3,  1, 17,  9, 15,  9, 12, 19,  2,  1, 19,  2,  2, 19,  1,
  2, 19,  1,  3, 18,  5, 23,  1,  3, 23,  1,  2, 23,  2,  2, 23,  2,  1, 21,  4, 31,  2,  1, 31,
  2,  2, 31,  1,  2, 31,  1,  3, 26,  5, 27,  1,  3, 27,  1,  2, 27,  2,  2, 27,  2,  1, 17,  4,
  7,  3, 17, 23,  6,  6, 15,  4, 12, 18, 21, 10, 21, 21,  9, 23,  3,  1, 23,  1,  1, 23,  1,  2,
 18,  2, 19,  1,  2, 19,  1,  1, 19,  3,  1, 17,  9,  5,  7, 23,  7, 11, 15, 17,  9, 27,  2,  2,
 27,  3,  1, 17,  4, 19,  3,  1, 19,  2,  2, 18,  2, 23,  1,  2, 23,  1,  1, 23,  2,  1, 23,  6,
  2, 23,  2,  1, 23,  1,  1, 23,  1,  2, 18,  3, 19,  2,  2, 19,  3,  1, 17,  4, 27,  3,  1, 27,
  2,  2, 15,  8, 12, 18, 21, 11,  7, 21, 21, 14, 15,  4, 12, 18, 15, 23,  1,  3, 23,  2,  2, 23,
  3,  1, 21,  2, 31,  3,  1, 31,  2,  2, 31,  1,  3, 26, 15, 15,  1, 12, 23,  8, 21, 15,  8, 21,
 19,  8, 21, 15,  2, 12, 23,  5, 21, 15,  5, 21, 19,  5, 21, 15,  5, 21, 23,  5, 21, 15,  5, 21,
 19,  5, 21, 15,  3, 12, 23, 14, 21, 10, 21, 19, 14, 21, 15,  1, 12, 23,  8, 10, 18, 11, 15,  8,
 21, 19,  8, 10, 15, 17, 12, 19, 14, 21, 10, 21, 21, 14,  3, 14, 21, 21, 14, 15,  4, 16, 18, 32,
 15,  1, 32, 18, 32, 11,  1, 32, 21,  7,  3,  7, 32, 21,  7, 10, 12, 23, 14, 24, 15,  9, 16, 18,
 32, 15,  1, 32, 18, 32, 11,  7, 32, 21,  7,  3,  7, 32, 21,  7, 15,  6,  6, 31,  2,  3, 23,  2,
  3,  3,  7,  3, 31,  5,  5, 23,  5,  5, 11,  5,  5, 18, 17,  2, 11, 21, 16, 15,  6, 12, 19,  1,
  1, 19,  1,  2, 18,  2, 23,  1,  1, 31,  1,  1, 27,  1,  1, 15, 15,  5, 18, 14, 10, 11, 27,  2,
  2, 27,  2,  1, 17,  3, 19,  2,  1, 19,  2,  2, 19,  1,  3, 18,  2, 23,  1,  3, 23,  2,  2, 23,
  2,  1, 21,  3, 31,  2,  1, 31,  2,  2, 15,  4, 12, 18, 21, 10, 11, 31,  2,  2, 31,  2,  1, 21,
  3, 23,  2,  1, 23,  2,  2, 23,  1,  3, 18,  2, 19,  1,  3, 19,  2,  2, 19,  2,  1, 17,  3, 27,
  2,  1, 27,  2,  2, 15, 15,  2, 27,  2,  2, 27,  2,  1, 17,  3, 19,  2,  1, 19,  2,  2, 19,  1,
  3, 18,  2, 23,  1,  3, 23,  2,  2, 23,  2,  1, 21,  3, 31,  2,  1, 31,  2,  2, 15, 15, 12, 18,
 21, 10, 11, 27,  2,  2, 27,  2,  1, 17,  3, 19,  2,  1, 19,  2,  2, 19,  1,  3, 18,  2, 23,  1,
  3, 23,  2,  2, 23,  2,  1, 21,  3, 31,  2,  1, 31,  2,  2,  7,  3,  1, 21, 12, 26,  2, 27,  1,
  2, 27,  1,  1, 27,  2,  1, 17,  3, 19,  2,  1, 19,  2,  2, 19,  1,  3, 18,  2, 23,  1,  3, 23,
  2,  2, 23,  2,  1, 21,  3, 31,  2,  1, 31,  2,  2, 15, 10, 12, 17,  2, 19,  2,  1, 19,  1,  3,
 18, 17, 11,  3, 14, 21,  7, 15, 15,  5, 18, 16, 19,  1,  3, 19,  1,  1, 19,  2,  1, 17,  3, 27,
  2,  1, 15,  9, 17, 27,  2,  2, 27,  2,  1, 17,  3, 19,  2,  1, 19,  2,  2, 19,  1,  3, 18,  2,
 23,  1,  3, 23,  2,  2, 23,  2,  1, 21,  3, 31,  2,  1, 31,  2,  2, 15,  4, 12, 18, 21, 10, 10,
 31,  3,  3, 31,  2,  1, 21,  3, 23,  2,  1, 23,  1,  3, 18, 10, 15,  3, 12, 23,  1,  1, 31,  1,
  1, 27,  1,  1, 19,  1,  1,  7,  1,  7, 18, 14, 15,  5, 12, 23,  1,  1, 31,  1,  1, 27,  1,  1,
 19,  1,  1,  7,  1,  7, 18, 17, 19,  1,  3, 19,  2,  1, 17,  2, 15,  4, 12, 18, 21, 15, 10, 14,
 19, 10, 10, 15,  4,  4, 23,  7,  8, 15,  4, 12, 18, 21, 15,  4,  5, 18, 14, 10, 10, 31,  3,  3,
 31,  2,  1, 21,  3, 23,  2,  1, 23,  1,  3, 18, 10, 10, 10, 31,  3,  3, 31,  2,  1, 21,  3, 23,
  2,  1, 23,  1,  3, 18, 10, 15,  4,  5, 18, 14, 10, 10, 31,  3,  3, 31,  2,  1, 21,  3, 23,  2,
  1, 23,  1,  3, 18, 10, 15,  8,  5, 19,  2,  1, 19,  2,  2, 19,  1,  3, 18,  2, 23,  1,  3, 23,
  2,  2, 23,  2,  1, 21,  3, 31,  2,  1, 31,  2,  2, 31,  1,  3, 26,  2, 27,  1,  3, 27,  2,  2,
 27,  2,  1, 17,  3, 15,  4,  5, 18, 21, 10, 18, 31,  2,  2, 31,  2,  1, 21,  3, 23,  2,  1, 23,
  2,  2, 23,  1,  3, 18,  2, 19,  1,  3, 19,  2,  2, 19,  2,  1, 17,  3, 27,  2,  1, 27,  2,  2,
 15, 15,  5, 18, 21, 10, 18, 27,  2,  2, 27,  2,  1, 17,  3, 19,  2,  1, 19,  2,  2, 19,  1,  3,
 18,  2, 23,  1,  3, 23,  2,  2, 23,  2,  1, 21,  3, 31,  2,  1, 31,  2,  2, 15,  4,  5, 18, 14,
 10,  8, 31,  1,  3, 31,  2,  2, 31,  2,  1, 21,  3, 15, 14,  2, 27,  1,  2, 27,  3,  1, 17,  3,
 19,  3,  1, 19,  1,  2, 23,  1,  2, 23,  2,  1, 23,  5,  1, 23,  2,  1, 23,  1,  2, 18,  1, 19,
  1,  2, 19,  3,  1, 17,  3, 27,  3,  1, 27,  1,  2, 15,  5, 12, 18, 17, 23,  1,  3, 23,  2,  1,
 21,  2, 11,  8, 14, 21,  7, 15,  4,  5, 18, 10, 23,  1,  3, 23,  2,  1, 21,  3, 31,  2,  1, 31,
  3,  3, 10, 10, 18, 14, 15,  2,  5, 23,  6, 14, 15,  6, 14, 19,  6, 14, 15,  3,  5, 23,  4, 14,
 15,  4, 14, 19,  4, 14, 15,  4, 14, 23,  4, 14, 15,  4, 14, 19,  4, 14, 15,  3,  5, 23, 11, 14,
 10, 14, 19, 11, 14, 15,  2,  5, 23,  6, 14, 15,  6, 14, 19,  6, 14, 19,  2,  4, 19,  2,  2, 19,
  2,  1, 17,  1, 15, 14,  5, 19, 11, 14, 10, 14, 21, 11,  3, 11, 14, 21, 11, 15,  9, 16, 19,  2,
  1, 19,  1,  1, 19,  1,  2, 18,  2, 23,  1,  2, 23,  1,  1, 23,  1,  2, 18,  2, 19,  2,  2, 15,
  1, 14, 19,  1,  2, 18,  2, 23,  1,  2, 23,  1,  1, 23,  1,  2, 18,  2, 19,  1,  2, 19,  4,  2,
 23,  4,  2, 23,  1,  2, 18,  2, 19,  1,  2, 19,  1,  1, 19,  1,  2, 18,  2, 23,  1,  2, 11,  1,
 14, 23,  2,  2, 18,  2, 19,  1,  2, 19,  1,  1, 19,  1,  2, 18,  2, 23,  1,  2, 23,  1,  1, 23,
  2,  1, 15,  4, 16, 18, 32, 15,  5, 16, 23,  2,  1, 23,  1,  1, 23,  1,  2, 18,  2, 19,  1,  2,
 19,  1,  1, 19,  1,  2, 18,  2, 23,  2,  2, 11,  1, 14, 23,  1,  2, 18,  2, 19,  1,  2, 19,  1,
  1, 19,  1,  2, 18,  2, 23,  1,  2, 23,  4,  2, 19,  4,  2, 19,  1,  2, 18,  2, 23,  1,  2, 23,
  1,  1, 23,  1,  2, 18,  2, 19,  1,  2, 15,  1, 14, 19,  2,  2, 18,  2, 23,  1,  2, 23,  1,  1,
 23,  1,  2, 18,  2, 19,  1,  2, 19,  1,  1, 19,  2,  1,  7,  3,  3, 26,  2, 31,  1,  3, 31,  2,
  1, 21,  2, 23,  2,  1, 23,  4,  3, 23,  2,  1, 21,  2, 31,  2,  1, 31,  1,  2,  3, 18,  2, 31,
  1,  2, 31,  2,  1, 21,  2, 23,  2,  1, 23,  4,  3, 23,  2,  1, 21,  2, 31,  2,  1, 31,  1,  3,
 26,  2, 15,  6, 12, 19,  2,  1, 19,  1,  2, 18,  2, 23,  1,  2, 23,  2,  1, 21,  2, 31,  2,  1,
 31,  1,  2, 26,  2, 27,  1,  2, 27,  2,  1, 17,  2
};

// GLYPH DESCRIPTION
static const glyph_dsc_t glyph_dsc_romans[96] = {
    {.end_index =     0, .adv_w =    16},
    {.end_index =    19, .adv_w =    10},
    {.end_index =    29, .adv_w =    16},
    {.end_index =    51, .adv_w =    21},
    {.end_index =   117, .adv_w =    20},
    {.end_index =   195, .adv_w =    24},
    {.end_index =   289, .adv_w =    26},
    {.end_index =   309, .adv_w =    10},
    {.end_index =   338, .adv_w =    14},
    {.end_index =   367, .adv_w =    14},
    {.end_index =   383, .adv_w =    16},
    {.end_index =   393, .adv_w =    26},
    {.end_index =   416, .adv_w =    10},
    {.end_index =   420, .adv_w =    26},
    {.end_index =   435, .adv_w =    10},
    {.end_index =   441, .adv_w =    22},
    {.end_index =   488, .adv_w =    20},
    {.end_index =   499, .adv_w =    20},
    {.end_index =   537, .adv_w =    20},
    {.end_index =   578, .adv_w =    20},
    {.end_index =   591, .adv_w =    20},
    {.end_index =   638, .adv_w =    20},
    {.end_index =   702, .adv_w =    20},
    {.end_index =   713, .adv_w =    20},
    {.end_index =   794, .adv_w =    20},
    {.end_index =   858, .adv_w =    20},
    {.end_index =   887, .adv_w =    10},
    {.end_index =   925, .adv_w =    10},
    {.end_index =   934, .adv_w =    24},
    {.end_index =   944, .adv_w =    26},
    {.end_index =   953, .adv_w =    24},
    {.end_index =  1005, .adv_w =    18},
    {.end_index =  1150, .adv_w =    27},
    {.end_index =  1167, .adv_w =    18},
    {.end_index =  1222, .adv_w =    21},
    {.end_index =  1273, .adv_w =    21},
    {.end_index =  1310, .adv_w =    21},
    {.end_index =  1329, .adv_w =    19},
    {.end_index =  1343, .adv_w =    18},
    {.end_index =  1400, .adv_w =    21},
    {.end_index =  1415, .adv_w =    22},
    {.end_index =  1420, .adv_w =     8},
    {.end_index =  1447, .adv_w =    16},
    {.end_index =  1464, .adv_w =    21},
    {.end_index =  1472, .adv_w =    17},
    {.end_index =  1493, .adv_w =    24},
    {.end_index =  1507, .adv_w =    22},
    {.end_index =  1566, .adv_w =    22},
    {.end_index =  1597, .adv_w =    21},
    {.end_index =  1662, .adv_w =    22},
    {.end_index =  1698, .adv_w =    21},
    {.end_index =  1754, .adv_w =    20},
    {.end_index =  1764, .adv_w =    16},
    {.end_index =  1791, .adv_w =    22},
    {.end_index =  1803, .adv_w =    18},
    {.end_index =  1827, .adv_w =    24},
    {.end_index =  1838, .adv_w =    20},
    {.end_index =  1852, .adv_w =    18},
    {.end_index =  1867, .adv_w =    20},
    {.end_index =  1887, .adv_w =    14},
    {.end_index =  1892, .adv_w =    14},
    {.end_index =  1912, .adv_w =    14},
    {.end_index =  1935, .adv_w =    16},
    {.end_index =  1939, .adv_w =    16},
    {.end_index =  1959, .adv_w =    10},
    {.end_index =  2002, .adv_w =    19},
    {.end_index =  2045, .adv_w =    19},
    {.end_index =  2084, .adv_w =    18},
    {.end_index =  2127, .adv_w =    19},
    {.end_index =  2173, .adv_w =    18},
    {.end_index =  2191, .adv_w =    12},
    {.end_index =  2249, .adv_w =    19},
    {.end_index =  2272, .adv_w =    19},
    {.end_index =  2292, .adv_w =     8},
    {.end_index =  2320, .adv_w =    10},
    {.end_index =  2337, .adv_w =    17},
    {.end_index =  2342, .adv_w =     8},
    {.end_index =  2383, .adv_w =    30},
    {.end_index =  2406, .adv_w =    19},
    {.end_index =  2453, .adv_w =    19},
    {.end_index =  2496, .adv_w =    19},
    {.end_index =  2539, .adv_w =    19},
    {.end_index =  2557, .adv_w =    13},
    {.end_index =  2605, .adv_w =    17},
    {.end_index =  2623, .adv_w =    12},
    {.end_index =  2646, .adv_w =    19},
    {.end_index =  2658, .adv_w =    16},
    {.end_index =  2682, .adv_w =    22},
    {.end_index =  2693, .adv_w =    17},
    {.end_index =  2716, .adv_w =    16},
    {.end_index =  2731, .adv_w =    17},
    {.end_index =  2834, .adv_w =    14},
    {.end_index =  2839, .adv_w =     8},
    {.end_index =  2942, .adv_w =    14},
    {.end_index =  3002, .adv_w =    24},
    {.end_index =  3037, .adv_w =    14},
};

const font_t f_hershey_romans = {
    .units_per_em = 28,
    .n_glyphs = 96,
    .glyphs = glyphs_romans,
    .glyph_dsc = glyph_dsc_romans,
    .map_start = 32,
    .map_n = 96,
    .map_unicode_table = NULL
};