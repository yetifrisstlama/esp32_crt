#include <stdint.h>
// -----------------------------------
//  switzerland_simple_simple_svg
// xmin, xmax, ymin, ymax: -1162, 2373, -1303, 982,
// -----------------------------------
// This is a map of Switzerland showing the outside border and the biggest lakes
// The scaling is 1 unit = 0.1 km
// The coordinate origin is at the old observatory in Bern (like in LV95)

const uint8_t switzerland_map[2224] = {
 12,  5,178,  3, 35, 55, 22, 15, 15, 34, 32,  7, 19, 26, 55, 23, 13, 15, 37, 13,  7,  6, 35, 55,
  8, 25,  7, 19, 27, 15, 31, 12, 55, 14, 22,  7, 26, 11,  7, 24,  6, 55,  2, 20, 15, 30, 27,  7,
  3, 26, 55, 20,  8,  7,  5, 32, 11, 29,  7, 59,  9,  2, 11,  9,  3,  3,  1, 10, 59, 11,  5,  7,
  1, 30, 11, 18, 11, 51, 23,  2, 15, 24, 35,  3, 24, 19, 51,  9, 21, 11, 31,  3, 11,  7, 21, 51,
  4, 19,  3, 42, 19, 11, 22, 21, 59, 27, 11, 11,  3, 23, 11, 22, 12, 59, 24, 10, 15,  5, 22, 11,
  8, 16, 59, 26, 13, 11, 22, 19, 11, 23, 17, 59, 25, 11, 11, 24, 13, 11, 24, 13, 59,  9, 30,  3,
 35, 23, 11, 21, 11, 59, 21, 11,  3, 22,  3,  1, 23, 51, 24,  4,  3, 16, 20,  3, 25,  2, 51, 26,
 16, 11, 29, 19, 11, 20, 18, 59,  9,  7, 11, 18,  3,  7, 22,  2, 55, 19, 22,  7, 32,  9, 15, 27,
 12, 63, 20,  8, 15, 27, 13, 15, 11, 17, 59,  3, 24,  3, 52,  1, 15,  9, 20, 63, 17, 13,  7, 33,
 33, 10, 11, 59, 15,  4, 11,  5, 24,  7, 18, 17, 55, 24, 17,  7, 32,  6,  7, 20, 21, 51,  5, 30,
 11, 36, 54,  3,  8, 17, 55,  9, 31, 15, 46, 25,  7, 13, 29, 63, 20,  5,  7, 30, 22, 15, 13, 18,
 58, 25, 11, 35,  8, 15,  7, 29, 59, 17, 29, 11, 38,  4, 11, 24, 23, 59, 11, 12, 11, 19, 13, 15,
  2, 16, 63, 25,  4,  7, 16, 31,  7, 22,  9, 55, 16, 18,  7, 26,  2,  7, 17, 17, 55, 33,  5,  3,
 11, 38,  7, 26, 15, 55, 21, 11,  7, 17, 15,  7, 21, 10, 16, 12,255,100,  0,205, 51, 20, 20,  3,
  2, 30,  3, 18, 19, 51, 12, 17,  3, 20,  6,  3, 18,  6, 49, 14, 11, 25, 15, 15, 24,  9, 63, 19,
 11, 15, 13, 17, 15, 20,  9, 63, 17, 11, 15, 11, 19, 15, 18, 11, 63,  4,  2,  7,  6,  1,  3,  3,
  5, 16, 12,  3,138,255,205, 51, 29, 19, 15,  2, 60, 15,  3, 17, 63, 14, 24, 11, 19, 27,  3, 24,
 23, 51, 25, 20, 11, 33,  5, 11, 27, 11, 59, 35, 11, 15, 67, 22,  3, 40,  2, 59, 32,  9,  3, 19,
 23,  3, 26,  8, 59, 26, 16, 15, 29, 14, 15, 11, 11, 59,  4, 14, 11, 22, 37,  7, 28, 25, 55, 28,
 20, 15, 21, 73,  7, 15, 27, 51,  6, 16,  3, 28, 31, 15, 36,  6, 63, 38,  8,  3, 11, 60, 15, 40,
  9, 63, 25,  5, 15, 38, 18,  7,  4, 41, 55,  1, 26,  3,  2, 27,  7,  9, 24, 19,  1,  5, 16, 14,
254,168,123, 55, 14,  9,  5, 27,  2, 21, 51,  4, 16,  3, 18,  7,  3, 12, 10, 51, 22, 19,  3, 22,
 20,  3, 23, 18, 51, 21, 17,  3, 14, 23,  3, 21, 16, 51, 10,  9,  3, 13,  6,  3, 10,  8, 51, 12,
 17,  3, 18, 18, 11, 22,  4, 59, 19,  7,  3, 14, 19,  3, 16,  6, 51, 18,  8, 11, 12, 26, 15, 21,
  6, 63, 19, 12, 15, 17, 14, 15, 17, 15, 63, 29, 23, 15, 10, 43, 15, 35, 17, 63, 24, 13, 15, 16,
 25, 15, 11, 26, 63, 24, 10, 15, 24, 10, 15, 20, 16, 63,  4,  2, 15,  6,  1,  7,  3,  3, 16, 12,
  0,226,254,234, 55,  7,  8,  7,  2, 18, 15, 15,  6, 55, 12,  1, 15, 13,  2,  7, 11,  3, 55, 11,
  3,  7,  5, 21, 11, 16,  3, 59, 13,  5,  3, 10, 10,  3, 12,  1, 49, 13, 11,  7, 15,  3, 13,  1,
 59, 13,  3, 11,  2, 16, 11, 10,  7, 59, 11,  7, 11, 14,  4, 11,  7, 12, 59, 10,  8, 11,  5, 11,
 15,  1, 12, 63,  1, 17,  7, 13, 16,  7,  5,  6, 55,  8,  8,  7, 14,  2,  7,  5, 11, 55,  9, 10,
  5, 15,  7,  9,  9, 16, 15,242, 52, 51, 19, 13,  3, 21,  7,  3, 16, 15, 51, 15,  6,  3, 12,  8,
  3, 11, 12, 51,  7,  8, 11, 33,  6, 15, 18,  9, 63, 26, 15, 15, 22, 20, 15, 20, 21, 63, 13,  9,
 15, 21,  3,  7, 12, 12, 55,  1,  1,  0,  7,  1,  1, 16, 12,253,  6,253,117, 59, 26,  3,  3, 29,
 53, 11, 16, 43, 59, 21, 27,  3, 35, 23,  3, 10, 25, 51, 17, 29,  3, 12, 34,  3, 27, 24, 51, 14,
 14,  7,  6, 49, 11, 28, 10, 59, 10, 27, 15, 20, 24, 15,  5, 26, 63,  9, 30, 15, 16, 27, 15, 11,
 29, 63, 15, 28, 15, 40,  9, 15,  8, 33, 63, 17, 19, 15, 16, 34,  7, 32, 11, 53, 34, 15, 32, 21,
 15, 20, 27, 63, 20, 20,  7, 28, 23, 15, 26, 10, 55, 32,  5,  5, 33,  7, 28, 18, 55, 21,  7,  7,
 20, 10,  7, 22,  5, 55, 20,  4,  7, 18,  8,  7, 16, 12, 55, 26,  5,  7, 42, 47,  3, 46,  8, 51,
 36, 13, 11, 38, 12, 11, 35, 10, 59, 30,  9,  3, 31,  7, 11, 31,  3, 49, 28,  3, 27, 16, 11, 27,
 10, 51,  7,  5,  3, 13, 11, 15,  8, 15, 59, 27,  5,  7,  5, 44,  3, 25,  1, 12,  4,128,  1, 58,
 50, 19,  3, 23,  5, 11, 15,  2, 49, 17,  3, 13, 16, 11, 17,  5, 49, 17, 11,  2, 24,  3, 17,  9,
 51, 16,  3,  3, 17,  2, 11, 16,  5, 59, 13,  6, 11,  8, 12, 11, 10,  9, 59,  7,  6, 11,  6, 10,
 11,  8,  4, 59, 22,  4, 11, 24, 10, 11,  7, 24, 59, 11, 25, 11, 11, 25, 11, 12, 24, 59,  2, 17,
  7, 25,  8,  3,  3, 13, 55, 13, 28,  7,  7, 32,  7, 26, 19, 55, 20, 15,  7, 28,  3,  7, 17, 19,
 55, 20, 15,  7, 28,  2, 15, 23, 10, 55, 14,  5,  7,  5, 20, 15, 17,  1, 63, 16,  1,  7, 17,  2,
 15, 16,  6, 63,  7,  2, 15,  8,  2, 15,  7,  1, 16, 12,  6,110,  2,100, 55,  8, 35, 15, 73, 15,
  3, 23, 46, 55, 19, 55,  3, 29,  6,  3, 27, 42, 51, 12, 38,  3, 31, 24,  3, 16, 37, 51, 25, 44,
  3,  9, 52,  7, 27, 46, 55, 34, 40,  3, 72, 17,  7, 15, 29, 63, 39, 10,  7, 18, 21, 15, 38, 10,
 55, 33,  1, 15, 37,  8,  7, 30, 26, 63, 40,  9,  7, 24, 50, 15, 37, 22, 55, 21, 30,  3, 51, 58,
  7, 56, 21, 55, 41, 14, 15, 29,  1,  7, 33, 33, 55, 20, 27,  7, 25, 28, 15, 41, 20, 63, 22,  7,
 15, 57,  8, 11, 18, 44, 59,  8, 63,  7, 91, 74, 11, 19, 59, 63, 13, 24, 15, 29, 60,  7, 28, 39,
 55, 11, 34, 15, 78,  1,  3, 34, 48, 51,  8, 44,  7,  1, 35,  3, 21, 43, 51, 14, 25,  3,  9, 55,
  3,  8, 29, 51, 42, 53,  7, 50, 35,  7, 46,  2, 55, 19, 24,  3, 10, 87, 11, 38, 20, 59, 43, 17,
  3, 22, 16, 11, 37,  6, 59, 30, 38,  3, 12,  9, 11,  2, 53, 59, 12, 22,  3, 50, 35,  3, 34,  4,
 51, 34,  8,  7, 15, 49,  3, 39, 18, 55,  6, 35,  3, 14, 52,  7, 12, 28, 55, 18, 42, 15, 51, 42,
  7, 16, 32, 55,  8, 33,  3, 71, 19,  7, 26, 48, 55, 13, 32,  7, 51, 22,  3, 27, 34, 51, 67, 53,
 11,  3, 51, 11, 33, 42, 59, 55, 18, 15, 55, 63, 11, 53, 23, 59, 27, 15,  3, 32, 17,  3, 40, 11,
 51, 29, 54, 11, 51, 71,  3, 11, 55, 55, 20, 50, 11, 69, 17,  3, 31,  5, 59, 40,  4, 11, 37, 21,
 11,  4, 45, 59, 38, 21, 15,  2, 40, 15,  1, 43, 63, 22, 41, 11, 36, 55,  3, 14, 66, 51, 42, 23,
 15, 16, 87,  3, 57, 30, 51, 36, 16,  3, 20, 52,  7, 13, 28, 55, 23, 33,  3,  5, 43,  7,  6, 39,
 51, 11, 33,  3, 27, 22,  7,  2, 39, 51, 38, 11,  7,  3, 59,  3, 33, 11, 51, 36, 28,  3, 41, 23,
  7, 19, 45, 51,  9, 25,  3, 76,  3,  7, 37, 46, 51,  7, 38,  3, 17, 12,  7, 23, 41, 55, 60,  9,
  3, 19, 45,  3, 20, 35, 51, 15, 68, 11, 30, 82,  3, 35, 30, 59, 25,  2, 15, 50, 58, 11, 39, 30,
 59,  4, 51, 11, 83, 24, 11,  3, 31, 63, 42, 22, 15, 20, 71, 11, 62,  4, 59, 49, 30,  3,  2, 16,
 11, 42,  1, 59, 38, 11, 11, 22, 18, 11, 15, 36, 59, 28, 31, 11, 10, 43, 11, 48,  1, 59, 17, 31,
 11, 26, 43, 15, 42, 34, 59,  6, 43, 15, 13, 35, 11, 13, 39, 63, 16, 50,  3, 78, 21,  3, 23, 19,
 51, 55, 21,  7, 22, 23,  3,  7, 31, 51, 32, 17,  3, 21, 20,  3, 17, 35, 51, 38, 18, 11, 37, 12,
  3, 26, 45, 55, 14, 27,  7, 38, 23,  7,  8, 42, 51,  2, 41,  3, 28, 34,  3, 47, 13, 51, 54,  4,
  7, 44, 79,  3, 37, 21, 51, 29, 26, 11, 93,  3,  7, 31, 78, 51, 49, 26, 11, 33, 63,  3, 39, 34,
 59, 12, 49, 11, 39, 10,  3, 50,  8, 59, 31, 48,  3,  2, 82, 11, 45, 18, 51, 24, 22,  3, 35, 44,
 11, 37,  8, 59, 38, 35,  3, 20, 34,  3, 44, 11, 51, 26, 57, 11, 21, 63,  3, 46, 42, 59, 19, 37,
 11, 26, 38, 11, 15, 34, 59,  2, 30, 11, 30, 26, 11, 21, 41, 59,  7, 50,  3, 52, 74, 15,  1, 46,
 63, 21, 40, 11,  4, 39,  3, 55,  2, 51, 51,  3, 15, 36, 92, 15, 20, 28, 63, 40, 35, 11, 32, 38,
 11, 35, 20, 59, 45, 41,  7, 40,  8, 15,  4, 50,  6,252,103,102, 51,  3, 54,  7, 30,  6,  7, 27,
  7, 51,  9, 53, 11, 86, 20,  3,  1, 58, 51, 30, 41, 11, 49, 38,  3, 25, 22, 59, 33,  3,  3, 62,
 27, 15, 35, 59, 63, 13, 21, 11, 14, 46,  5, 56, 63, 38, 10, 15, 42,  2, 11, 28, 49, 58, 32, 15,
 74, 61, 11, 45, 10, 59, 41, 32, 11, 15, 12, 15,  1, 40, 63,  7, 44, 15, 62, 37, 11, 14, 29, 59,
 52, 40, 15, 84, 26, 15, 22, 31, 63, 36, 33, 15, 26, 37, 15, 48, 17, 63, 55, 29, 15, 40, 38, 11,
 30, 52, 63, 43, 38, 11, 47, 58, 15, 14, 28, 63, 21, 49,  7, 45, 18, 15, 42, 29, 63, 29, 21, 15,
 43, 34, 15, 17, 28, 59, 30, 20, 15, 67, 26, 15,  8, 24, 63, 54, 16, 11,  6, 36, 15, 29, 20, 63,
 13, 32, 15, 45,  7, 15,  8, 30, 59, 34, 50,  7, 66, 11, 15,  9, 34, 63, 41, 10, 15, 10, 49, 11,
 49, 10, 51, 25, 17,  3,103, 18, 15, 38, 42, 63, 32, 35, 15, 21, 31, 15, 29, 33, 59, 33, 43,  7,
 73,  4,  7, 22, 15, 63, 28, 16,  7, 75,  1,  3, 31, 44, 51, 36, 52, 15,147, 22,  3, 42, 12, 63,
 42, 39,  7, 58, 66, 15, 25, 61, 63, 26, 28, 11, 52, 23,  7, 73, 24, 63,  8, 32, 15, 34, 23,  1,
 34, 63,  8, 27, 15, 87, 50,  3, 16, 11, 51,  2, 28, 15,105, 76,  3, 50, 48, 51,  1, 22,  3, 49,
 32, 15, 69,  4, 63, 33, 14,  5, 46, 15, 12, 37, 63, 30,  1, 15, 54, 14,  3,  5, 50, 55, 23,  3,
 15, 36,  7,  7, 32,  2, 63, 29, 11, 15, 10,  1, 15, 25, 21, 63, 46, 36, 15, 31, 10,  7, 48, 14,
 55, 21, 15,  7,  6, 41, 15, 40,  6, 63, 24, 22,  7, 31, 32, 15, 30, 22, 59, 26,  2, 15, 30, 39,
 15, 33, 10, 55, 29,  8,  7,  7, 64, 15, 11, 65, 59,  2, 41, 15, 23, 13,  3, 44,  2, 51, 33, 24,
  3, 29, 17, 11, 26, 23, 59, 34, 17, 11,  6, 38, 15, 39, 16, 63,  7, 29, 15, 19, 42,  7, 36,  6,
 55, 57,  8, 11, 46, 61,  7, 58, 30, 51,  7, 59, 15, 38, 16, 11,  1, 46, 55,  2, 43, 15, 82,  2,
  3, 39, 25, 51,  3, 30,  7, 35, 37, 15, 31, 10, 59, 18, 11, 15,  4, 61,  7, 28, 24, 55, 10, 37,
 15, 39, 10,  3, 12, 33, 55,  7,  2,  3,  1, 14,  7,  4,  6,240
};

