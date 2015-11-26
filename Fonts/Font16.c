// Font size 2

#include <avr/pgmspace.h>

// Width has been increased by 1 pixel so pixel lengths are calculated correctly
// for the displayed string
PROGMEM const unsigned char widtbl_f16[96] =         // character width table
{
        6, 3, 4, 9, 8, 9, 9, 3,             // char 32 - 39
        7, 7, 8, 6, 3, 6, 5, 7,             // char 40 - 47
        8, 8, 8, 8, 8, 8, 8, 8,             // char 48 - 55
        8, 8, 3, 3, 6, 6, 6, 8,             // char 56 - 63
        9, 8, 8, 8, 8, 8, 8, 8,             // char 64 - 71
        8, 4, 8, 8, 7, 10, 8, 8,             // char 72 - 79
        8, 8, 8, 8, 8, 8, 8, 10,             // char 80 - 87
        8, 8, 8, 4, 7, 4, 7, 9,             // char 88 - 95
        4, 7, 7, 7, 7, 7, 6, 7,             // char 96 - 103
        7, 5, 5, 6, 5, 8, 7, 8,             // char 104 - 111
        7, 8, 6, 6, 5, 7, 8, 8,             // char 112 - 119
        6, 7, 7, 5, 3, 5, 8, 6              // char 120 - 127
};

// Row format, MSB left

PROGMEM const unsigned char chr_f16_20[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,    // row 1 - 11
        0x00, 0x00, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_21[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,    // row 1 - 11
        0x00, 0x40, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_22[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0xA0, 0xA0, 0xA0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,    // row 1 - 11
        0x00, 0x00, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_23[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0x24, 0x24, 0x24, 0xFF, 0x24, 0x24, 0xFF, 0x24,    // row 1 - 11
        0x24, 0x24, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_24[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0x3C, 0x42, 0x40, 0x40, 0x70, 0x40, 0x70, 0x40,    // row 1 - 11
        0x40, 0xFE, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_25[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0x61, 0x91, 0x92, 0x64, 0x08, 0x10, 0x26, 0x49,    // row 1 - 11
        0x89, 0x86, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_26[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0x20, 0x50, 0x88, 0x88, 0x50, 0x20, 0x52, 0x8C,    // row 1 - 11
        0x8C, 0x73, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_27[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x40, 0x40, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,    // row 1 - 11
        0x00, 0x00, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_28[16] =         // 1 unsigned char per row
{
        0x00, 0x0C, 0x10, 0x20, 0x40, 0x40, 0x80, 0x80, 0x80, 0x80, 0x80,    // row 1 - 11
        0x40, 0x40, 0x20, 0x10, 0x0C                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_29[16] =         // 1 unsigned char per row
{
        0x00, 0xC0, 0x20, 0x10, 0x08, 0x08, 0x04, 0x04, 0x04, 0x04, 0x04,    // row 1 - 11
        0x08, 0x08, 0x10, 0x20, 0xC0                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_2A[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0x00, 0x10, 0x92, 0x54, 0x38, 0x54, 0x92, 0x10,    // row 1 - 11
        0x00, 0x00, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_2B[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x20, 0xF8, 0x20, 0x20,    // row 1 - 11
        0x00, 0x00, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_2C[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,    // row 1 - 11
        0xC0, 0xC0, 0x40, 0x80, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_2D[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00,    // row 1 - 11
        0x00, 0x00, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_2E[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,    // row 1 - 11
        0xC0, 0xC0, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_2F[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x04, 0x04, 0x08, 0x08, 0x10, 0x10, 0x20, 0x20, 0x40,    // row 1 - 11
        0x40, 0x80, 0x80, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_30[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0x38, 0x44, 0x44, 0x82, 0x82, 0x82, 0x82, 0x44,    // row 1 - 11
        0x44, 0x38, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_31[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0x10, 0x30, 0x50, 0x10, 0x10, 0x10, 0x10, 0x10,    // row 1 - 11
        0x10, 0x7C, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_32[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0x38, 0x44, 0x82, 0x02, 0x04, 0x18, 0x20, 0x40,    // row 1 - 11
        0x80, 0xFE, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_33[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0x78, 0x84, 0x02, 0x04, 0x38, 0x04, 0x02, 0x02,    // row 1 - 11
        0x84, 0x78, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_34[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0x04, 0x0C, 0x14, 0x24, 0x44, 0x84, 0xFE, 0x04,    // row 1 - 11
        0x04, 0x04, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_35[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0xFC, 0x80, 0x80, 0x80, 0xF8, 0x04, 0x02, 0x02,    // row 1 - 11
        0x84, 0x78, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_36[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0x3C, 0x40, 0x80, 0x80, 0xB8, 0xC4, 0x82, 0x82,    // row 1 - 11
        0x44, 0x38, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_37[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0x7E, 0x02, 0x02, 0x04, 0x04, 0x08, 0x08, 0x10,    // row 1 - 11
        0x10, 0x10, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_38[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0x38, 0x44, 0x82, 0x44, 0x38, 0x44, 0x82, 0x82,    // row 1 - 11
        0x44, 0x38, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_39[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0x38, 0x44, 0x82, 0x82, 0x46, 0x3A, 0x02, 0x02,    // row 1 - 11
        0x04, 0x78, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_3A[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0x00, 0xC0, 0xC0,    // row 1 - 11
        0x00, 0x00, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_3B[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0x00, 0xC0, 0xC0,    // row 1 - 11
        0x40, 0x80, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_3C[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0x00, 0x08, 0x10, 0x20, 0x40, 0x80, 0x40, 0x20,    // row 1 - 11
        0x10, 0x08, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_3D[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00,    // row 1 - 11
        0x00, 0x00, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_3E[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x20, 0x10, 0x08, 0x10, 0x20,    // row 1 - 11
        0x40, 0x80, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_3F[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0x38, 0x44, 0x82, 0x02, 0x04, 0x08, 0x10, 0x10,    // row 1 - 11
        0x00, 0x10, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_40[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0x3C, 0x42, 0x99, 0xA5, 0xA5, 0xA5, 0xA5, 0x9E,    // row 1 - 11
        0x40, 0x3E, 0x00, 0x00, 0x00                                         // row 12 - 16
};
PROGMEM const unsigned char chr_f16_41[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0x10, 0x10, 0x28, 0x28, 0x44, 0x44, 0x7C, 0x82,    // row 1 - 11
        0x82, 0x82, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_42[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0xF8, 0x84, 0x82, 0x84, 0xF8, 0x84, 0x82, 0x82,    // row 1 - 11
        0x84, 0xF8, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_43[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0x3C, 0x42, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,    // row 1 - 11
        0x42, 0x3C, 0x00, 0x00, 0x00                                         // row 12 - 16
};
PROGMEM const unsigned char chr_f16_44[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0xF8, 0x84, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82,    // row 1 - 11
        0x84, 0xF8, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_45[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0xFE, 0x80, 0x80, 0x80, 0xFC, 0x80, 0x80, 0x80,    // row 1 - 11
        0x80, 0xFE, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_46[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0xFE, 0x80, 0x80, 0x80, 0xF8, 0x80, 0x80, 0x80,    // row 1 - 11
        0x80, 0x80, 0x00, 0x00, 0x00                                         // row 12 - 16
};
PROGMEM const unsigned char chr_f16_47[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0x3C, 0x42, 0x80, 0x80, 0x80, 0x9C, 0x82, 0x82,    // row 1 - 11
        0x42, 0x3C, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_48[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0x84, 0x84, 0x84, 0x84, 0xFC, 0x84, 0x84, 0x84,    // row 1 - 11
        0x84, 0x84, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_49[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0xE0, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,    // row 1 - 11
        0x40, 0xE0, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_4A[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x82,    // row 1 - 11
        0x44, 0x38, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_4B[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0x84, 0x88, 0x90, 0xA0, 0xC0, 0xA0, 0x90, 0x88,    // row 1 - 11
        0x84, 0x82, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_4C[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,    // row 1 - 11
        0x80, 0xFC, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_4D[32] =         // 2 unsigned chars per row
{
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC1, 0x80, 0xC1, 0x80, 0xA2, 0x80,    // row 1 - 6
        0xA2, 0x80, 0x94, 0x80, 0x94, 0x80, 0x88, 0x80, 0x88, 0x80, 0x80, 0x80,    // row 7 - 12
        0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00                             // row 13 - 16
};

PROGMEM const unsigned char chr_f16_4E[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0xC2, 0xC2, 0xA2, 0xA2, 0x92, 0x92, 0x8A, 0x8A,    // row 1 - 11
        0x86, 0x86, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_4F[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0x38, 0x44, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82,    // row 1 - 11
        0x44, 0x38, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_50[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0xF8, 0x84, 0x82, 0x82, 0x82, 0x84, 0xF8, 0x80,    // row 1 - 11
        0x80, 0x80, 0x00, 0x00, 0x00                                         // row 12 - 16
};
PROGMEM const unsigned char chr_f16_51[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0x38, 0x44, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82,    // row 1 - 11
        0x44, 0x38, 0x08, 0x06, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_52[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0xF8, 0x84, 0x82, 0x82, 0x84, 0xF8, 0x90, 0x88,    // row 1 - 11
        0x84, 0x82, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_53[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0x38, 0x44, 0x82, 0x80, 0x60, 0x1C, 0x02, 0x82,    // row 1 - 11
        0x44, 0x38, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_54[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0xFE, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,    // row 1 - 11
        0x10, 0x10, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_55[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82,    // row 1 - 11
        0x44, 0x38, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_56[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0x82, 0x82, 0x82, 0x82, 0x44, 0x44, 0x28, 0x28,    // row 1 - 11
        0x10, 0x10, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_57[32] =         // 2 unsigned chars per row
{
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,    // row 1 - 6
        0x88, 0x80, 0x88, 0x80, 0x49, 0x00, 0x55, 0x00, 0x55, 0x00, 0x22, 0x00,    // row 7 - 12
        0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00                             // row 13 - 16
};

PROGMEM const unsigned char chr_f16_58[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0x82, 0x82, 0x44, 0x28, 0x10, 0x10, 0x28, 0x44,    // row 1 - 11
        0x82, 0x82, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_59[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0x82, 0x82, 0x82, 0x44, 0x28, 0x10, 0x10, 0x10,    // row 1 - 11
        0x10, 0x10, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_5A[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0xFE, 0x02, 0x04, 0x08, 0x10, 0x10, 0x20, 0x40,    // row 1 - 11
        0x80, 0xFE, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_5B[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0xE0, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,    // row 1 - 11
        0x80, 0x80, 0xE0, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_5C[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x04, 0x04, 0x08, 0x08, 0x10, 0x10, 0x20, 0x20, 0x40,    // row 1 - 11
        0x40, 0x80, 0x80, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_5D[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0xE0, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,    // row 1 - 11
        0x20, 0x20, 0xE0, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_5E[32] =         // 1 unsigned chars per row
{
        0x00, 0x10, 0x28, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,    // row 1 - 11
        0x00, 0x00, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_5F[32] =         // 1 unsigned chars per row
{
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,    // row 1 - 11
        0x00, 0x00, 0x00, 0xFF, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_60[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0x40, 0x40, 0x40, 0x20, 0x00, 0x00, 0x00, 0x00,    // row 1 - 11
        0x00, 0x00, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_61[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x08, 0x04, 0x74, 0x8C,    // row 1 - 11
        0x8C, 0x74, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_62[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xB0, 0xC8, 0x84, 0x84, 0x84,    // row 1 - 11
        0xC8, 0xB0, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_63[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x44, 0x80, 0x80, 0x80,    // row 1 - 11
        0x44, 0x38, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_64[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x34, 0x4C, 0x84, 0x84, 0x84,    // row 1 - 11
        0x4C, 0x34, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_65[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x44, 0x84, 0xF8, 0x80,    // row 1 - 11
        0x44, 0x38, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_66[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0x30, 0x48, 0x40, 0x40, 0x40, 0xE0, 0x40, 0x40,    // row 1 - 11
        0x40, 0x40, 0x00, 0x00, 0x00                                         // row 12 - 16
};
PROGMEM const unsigned char chr_f16_67[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x4C, 0x84, 0x84, 0x84,    // row 1 - 11
        0x4C, 0x34, 0x04, 0x08, 0x70                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_68[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0xB0, 0xC8, 0x84, 0x84, 0x84,    // row 1 - 11
        0x84, 0x84, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_69[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x40, 0x40, 0x40, 0x40, 0x40,    // row 1 - 11
        0x40, 0x40, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_6A[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x30, 0x10, 0x10, 0x10, 0x10,    // row 1 - 11
        0x10, 0x10, 0x10, 0x90, 0x60                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_6B[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x88, 0x90, 0xA0, 0xC0, 0xA0,    // row 1 - 11
        0x90, 0x88, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_6C[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0xC0, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,    // row 1 - 11
        0x40, 0x40, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_6D[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xAC, 0xD2, 0x92, 0x92, 0x92,    // row 1 - 11
        0x92, 0x92, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_6E[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xB0, 0xC8, 0x84, 0x84, 0x84,    // row 1 - 11
        0x84, 0x84, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_6F[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x44, 0x82, 0x82, 0x82,    // row 1 - 11
        0x44, 0x38, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_70[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xB0, 0xC8, 0x84, 0x84, 0x84,    // row 1 - 11
        0xC8, 0xB0, 0x80, 0x80, 0x80                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_71[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x34, 0x4C, 0x84, 0x84, 0x84,    // row 1 - 11
        0x4C, 0x34, 0x04, 0x04, 0x06                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_72[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xB0, 0xC8, 0x80, 0x80, 0x80,    // row 1 - 11
        0x80, 0x80, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_73[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x88, 0x80, 0x70, 0x08,    // row 1 - 11
        0x88, 0x70, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_74[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0x00, 0x40, 0x40, 0xE0, 0x40, 0x40, 0x40, 0x40,    // row 1 - 11
        0x40, 0x30, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_75[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x84, 0x84, 0x84, 0x84,    // row 1 - 11
        0x4C, 0x34, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_76[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x82, 0x82, 0x82, 0x82, 0x44,    // row 1 - 11
        0x28, 0x10, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_77[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x82, 0x82, 0x82, 0x92, 0x92,    // row 1 - 11
        0xAA, 0x44, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_78[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x88, 0x50, 0x20, 0x50,    // row 1 - 11
        0x88, 0x88, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_79[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x84, 0x84, 0x84, 0x84,    // row 1 - 11
        0x4C, 0x34, 0x04, 0x08, 0x70                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_7A[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x04, 0x08, 0x30, 0x40,    // row 1 - 11
        0x80, 0xFC, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_7B[16] =         // 1 unsigned char per row
{
        0x00, 0x10, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x40, 0x20, 0x20,    // row 1 - 11
        0x20, 0x20, 0x20, 0x20, 0x10                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_7C[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,    // row 1 - 11
        0x40, 0x40, 0x40, 0x40, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_7D[16] =         // 1 unsigned char per row
{
        0x00, 0x40, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x10, 0x20, 0x20,    // row 1 - 11
        0x20, 0x20, 0x20, 0x20, 0x40                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_7E[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x00, 0x32, 0x4C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,    // row 1 - 11
        0x00, 0x00, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char chr_f16_7F[16] =         // 1 unsigned char per row
{
        0x00, 0x00, 0x30, 0x48, 0x48, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00,    // row 1 - 11
        0x00, 0x00, 0x00, 0x00, 0x00                                         // row 12 - 16
};

PROGMEM const unsigned char* const chrtbl_f16[96] =       // character pointer table
{
        chr_f16_20, chr_f16_21, chr_f16_22, chr_f16_23, chr_f16_24, chr_f16_25, chr_f16_26, chr_f16_27, 
        chr_f16_28, chr_f16_29, chr_f16_2A, chr_f16_2B, chr_f16_2C, chr_f16_2D, chr_f16_2E, chr_f16_2F, 
        chr_f16_30, chr_f16_31, chr_f16_32, chr_f16_33, chr_f16_34, chr_f16_35, chr_f16_36, chr_f16_37, 
        chr_f16_38, chr_f16_39, chr_f16_3A, chr_f16_3B, chr_f16_3C, chr_f16_3D, chr_f16_3E, chr_f16_3F, 
        chr_f16_40, chr_f16_41, chr_f16_42, chr_f16_43, chr_f16_44, chr_f16_45, chr_f16_46, chr_f16_47, 
        chr_f16_48, chr_f16_49, chr_f16_4A, chr_f16_4B, chr_f16_4C, chr_f16_4D, chr_f16_4E, chr_f16_4F, 
        chr_f16_50, chr_f16_51, chr_f16_52, chr_f16_53, chr_f16_54, chr_f16_55, chr_f16_56, chr_f16_57, 
        chr_f16_58, chr_f16_59, chr_f16_5A, chr_f16_5B, chr_f16_5C, chr_f16_5D, chr_f16_5E, chr_f16_5F, 
        chr_f16_60, chr_f16_61, chr_f16_62, chr_f16_63, chr_f16_64, chr_f16_65, chr_f16_66, chr_f16_67, 
        chr_f16_68, chr_f16_69, chr_f16_6A, chr_f16_6B, chr_f16_6C, chr_f16_6D, chr_f16_6E, chr_f16_6F, 
        chr_f16_70, chr_f16_71, chr_f16_72, chr_f16_73, chr_f16_74, chr_f16_75, chr_f16_76, chr_f16_77, 
        chr_f16_78, chr_f16_79, chr_f16_7A, chr_f16_7B, chr_f16_7C, chr_f16_7D, chr_f16_7E, chr_f16_7F
};
