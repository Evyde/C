#include<reg51.h>
#include"lcd12864.h"

//---图片代码---//
unsigned char code Photo1[] ={
0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x01,0x3F,0xC0,
0x80,0x42,0x04,0x20,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x8A,0x1F,
0xFC,0x42,0x04,0xF8,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0x80,
0x01,0xFF,0xDE,0x88,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x01,0x2A,0x87,
0xF0,0xA2,0x0A,0xF8,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0xBF,0x84,
0x10,0xA2,0x0A,0x88,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x1F,
0xFC,0xA2,0x0A,0xF8,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x9F,0x90,
0x05,0x2F,0xCA,0xA4,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x01,0x80,0x03,
0xE1,0xA8,0x4A,0xA8,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0xBF,0xC2,
0x24,0x48,0x44,0x90,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x92,0x84,
0x24,0xA8,0x4A,0xA8,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0xA6,0x58,
0x3D,0x0F,0xD0,0xC4,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x1C,0xFF,0xC0,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x23,0x08,0x37,0x80,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x40,0x10,0x08,0x40,0x00,0xFF,0x90,
0x10,0x08,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x81,0x86,0x10,0x40,0x00,0x08,0x08,
0x10,0xFF,0x86,0x00,0x00,0x00,0x00,0x00,
0x01,0x02,0x49,0x40,0x40,0x00,0x7F,0x0B,
0xFC,0x08,0x0F,0x00,0x00,0x00,0x00,0x00,
0x01,0x08,0x00,0x40,0x20,0x00,0x10,0x00,
0x10,0x49,0x0F,0x00,0x00,0x00,0x00,0x00,
0x02,0x08,0x00,0x20,0x20,0x01,0xFF,0xDD,
0x10,0x2A,0x0F,0x00,0x00,0x00,0x00,0x00,
0x04,0x31,0x83,0x20,0x20,0x00,0x20,0x04,
0x91,0xFF,0xC6,0x00,0x00,0x00,0x00,0x00,
0x04,0x52,0x44,0x90,0x20,0x00,0x7F,0x04,
0x90,0x1C,0x06,0x00,0x00,0x00,0x00,0x00,
0x09,0xA4,0x28,0x4C,0x10,0x00,0xA1,0x04,
0x10,0x2A,0x00,0x00,0x00,0x00,0x00,0x00,
0x0E,0x44,0xE9,0xC3,0x90,0x01,0x3F,0x04,
0x70,0x49,0x06,0x00,0x00,0x00,0x00,0x00,
0x00,0x82,0xC5,0x81,0x70,0x00,0x21,0x0A,
0x01,0x88,0xC6,0x00,0x00,0x00,0x00,0x00,
0x01,0x01,0x83,0x00,0x80,0x00,0x3F,0x11,
0xFC,0x08,0x00,0x00,0x00,0x00,0x00,0x00,
0x01,0x0C,0x70,0x00,0x80,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x02,0x13,0x87,0x10,0x40,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x02,0x20,0x78,0xA0,0x40,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x02,0x20,0x00,0x60,0x40,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x02,0x21,0x80,0x60,0x40,0x00,0x00,0x71,
0xEE,0x3C,0x00,0x00,0x00,0x00,0x00,0x00,
0x01,0x11,0x98,0x90,0x80,0x00,0x00,0x8E,
0x31,0xC6,0x00,0x00,0x00,0x00,0x00,0x00,
0x01,0x08,0x18,0x80,0x80,0x00,0x01,0x24,
0x24,0x83,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x96,0x01,0x01,0x00,0x00,0x01,0x40,
0x28,0x03,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x49,0x86,0x03,0x00,0x00,0x01,0x40,
0x28,0x03,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x34,0x78,0x8C,0x00,0x00,0x01,0x00,
0x20,0x03,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x0E,0x01,0x30,0x00,0x00,0x00,0x80,
0x30,0x06,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x71,0x87,0xCE,0x00,0x00,0x00,0x40,
0x68,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0xE0,0x78,0x07,0x00,0x00,0x00,0x20,
0xC4,0x18,0x00,0x00,0x00,0x00,0x00,0x00,
0x01,0xAF,0xFF,0xC5,0x80,0x00,0x00,0x11,
0x82,0x30,0x00,0x00,0x00,0x00,0x00,0x00,
0x03,0xA9,0xB6,0x45,0xC0,0x00,0x00,0x0B,
0x01,0x60,0x00,0x00,0x00,0x00,0x00,0x00,
0x07,0x2F,0x03,0xC4,0xE0,0x00,0x00,0x06,
0x00,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,
0x0E,0x16,0x01,0x88,0x70,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x0F,0x08,0x00,0x10,0xF0,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x0F,0x84,0x00,0x21,0xF0,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
};
/******************************************************************************/
unsigned char code Photo2[] ={
      /*--  调入了一幅图像：G:\HC-6800\12864\C语言\pz.bmp  --*/
/*--  宽度x高度=128x64  --*/
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x80,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xFE,0x60,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x63,0x20,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x63,0x10,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x63,0x08,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x7E,0x08,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x6C,0x08,
0x1F,0xF8,0x3F,0xF8,0x7F,0xF0,0x0F,0xF9,0xF1,0xF0,0xFF,0x87,0xC3,0xC4,0x6C,0x08,
0x0E,0x7C,0x1E,0xFC,0x38,0xF8,0x3E,0xF8,0xE0,0xE0,0x1C,0x03,0xC1,0x84,0x66,0x08,
0x0E,0x1E,0x1C,0x3C,0x38,0x38,0x38,0x38,0xE0,0xE0,0x1C,0x03,0xE1,0x84,0x66,0x08,
0x0E,0x1E,0x1C,0x1C,0x38,0x18,0x78,0x38,0xE0,0xE0,0x1C,0x03,0xE1,0x82,0x63,0x10,
0x0E,0x0E,0x1C,0x1C,0x38,0x00,0xF0,0x18,0xE0,0xE0,0x1C,0x03,0xF1,0x81,0xF3,0xA0,
0x0E,0x0E,0x1C,0x3C,0x38,0xC0,0xF0,0x00,0xE0,0xE0,0x1C,0x03,0xF1,0x81,0x80,0x60,
0x0E,0x1E,0x1C,0x3C,0x38,0xC0,0xF0,0x00,0xE0,0xE0,0x1C,0x03,0x79,0x80,0x40,0x80,
0x0E,0x1E,0x1C,0xF8,0x39,0xC0,0xE0,0x00,0xE0,0xE0,0x1C,0x03,0x79,0x80,0x3F,0x00,
0x0E,0x7C,0x1F,0xF0,0x3F,0xC0,0xE0,0x00,0xFF,0xE0,0x1C,0x03,0x3D,0x80,0x00,0x00,
0x0F,0xF8,0x1D,0xE0,0x39,0xC0,0xE0,0x00,0xE0,0xE0,0x1C,0x03,0x3D,0x80,0x00,0x00,
0x0E,0x00,0x1D,0xE0,0x38,0xC0,0xE0,0x00,0xE0,0xE0,0x1C,0x03,0x1F,0x80,0x00,0x00,
0x0E,0x00,0x1C,0xF0,0x38,0xC0,0xF0,0x00,0xE0,0xE0,0x1C,0x03,0x1F,0x80,0x00,0x00,
0x0E,0x00,0x1C,0xF0,0x38,0x00,0xF0,0x00,0xE0,0xE0,0x1C,0x03,0x0F,0x80,0x00,0x00,
0x0E,0x00,0x1C,0x78,0x38,0x00,0xF0,0x18,0xE0,0xE0,0x1C,0x03,0x0F,0x80,0x00,0x00,
0x0E,0x00,0x1C,0x78,0x38,0x18,0x70,0x38,0xE0,0xE0,0x1C,0x03,0x07,0x80,0x00,0x00,
0x0E,0x00,0x1C,0x78,0x38,0x38,0x78,0x30,0xE0,0xE0,0x1C,0x03,0x07,0x80,0x00,0x00,
0x0E,0x00,0x1C,0x3C,0x38,0xF8,0x3E,0xF0,0xE0,0xE0,0x1C,0x03,0x03,0x80,0x00,0x00,
0x1F,0x00,0x3E,0x3E,0x7F,0xF0,0x1F,0xE1,0xF1,0xF0,0xFF,0x87,0x83,0x80,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0xF0,0x38,0x00,0x00,0x78,0x00,0x00,0x18,0x07,0x80,0x1C,0x03,0x80,0x00,
0x00,0x00,0x7C,0x7C,0x00,0x00,0x78,0x00,0x00,0x7C,0x07,0x80,0x1C,0x03,0xC0,0x00,
0x00,0x00,0x3C,0x70,0x00,0x00,0x70,0x00,0x07,0xFC,0x07,0x00,0x1C,0x03,0x80,0x00,
0x00,0x00,0x1C,0xE3,0xC0,0x00,0x70,0x00,0x1F,0xE1,0xC7,0x00,0x1C,0x03,0x80,0x00,
0x00,0x0F,0xFF,0xFF,0xE0,0x00,0x70,0x00,0x00,0xE1,0xE7,0x00,0x1C,0x03,0x80,0x00,
0x00,0x06,0x1C,0xE6,0x00,0xFF,0xFF,0xFC,0x00,0xE0,0xF7,0x00,0x1D,0x83,0x9E,0x00,
0x00,0x07,0x1C,0xE7,0x80,0xFF,0xFF,0xFC,0x00,0xE0,0xF7,0x03,0xFF,0xFF,0xFE,0x00,
0x00,0x03,0x9C,0xEF,0x80,0xE0,0x70,0x38,0x00,0xEE,0x67,0x00,0x1C,0x03,0x80,0x00,
0x00,0x03,0xDC,0xEE,0x00,0xE0,0x70,0x38,0x3F,0xFE,0x07,0x00,0x1C,0x03,0x80,0x00,
0x00,0x01,0xFC,0xFC,0x00,0xE0,0x70,0x38,0x01,0xE0,0x07,0x00,0x1C,0x03,0x80,0x00,
0x00,0x01,0xDC,0xF8,0xE0,0xE0,0x70,0x38,0x01,0xE1,0xC7,0x00,0x1D,0xC3,0xB8,0x00,
0x00,0x3F,0xFF,0xFF,0xF0,0xE0,0x70,0x38,0x03,0xF1,0xE7,0x00,0x1F,0xFF,0xFC,0x00,
0x00,0x3F,0xFF,0xFF,0xF0,0xE0,0x70,0x38,0x03,0xFC,0xE7,0x00,0x7E,0x38,0x38,0x00,
0x00,0x00,0x80,0x0C,0x00,0xFF,0xFF,0xF8,0x07,0xFE,0xE7,0xE3,0xFC,0x18,0x78,0x00,
0x00,0x00,0xFF,0xFE,0x00,0xE0,0x70,0x38,0x07,0xFE,0x07,0xF3,0xFC,0x1C,0x70,0x00,
0x00,0x00,0xFF,0xFE,0x00,0xE0,0x70,0x38,0x0F,0xEC,0x3F,0xC1,0x9C,0x1C,0xF0,0x00,
0x00,0x00,0xE0,0x1E,0x00,0x00,0x70,0x00,0x0E,0xE7,0xFF,0x00,0x1C,0x0E,0xE0,0x00,
0x00,0x00,0xE0,0x1E,0x00,0x00,0x70,0x00,0x1C,0xEF,0x07,0x00,0x1C,0x0F,0xE0,0x00,
0x00,0x00,0xFF,0xFE,0x00,0x00,0x70,0x00,0x38,0xE0,0x07,0x00,0x1C,0x07,0xC0,0x00,
0x00,0x00,0xE0,0x1E,0x00,0x00,0x70,0x00,0x30,0xE0,0x07,0x00,0x1C,0x07,0x80,0x00,
0x00,0x00,0xE0,0x1E,0x00,0x00,0x70,0x00,0x00,0xE0,0x07,0x00,0x1C,0x0F,0xE0,0x00,
0x00,0x00,0xE0,0x1E,0x00,0x00,0x70,0x00,0x00,0xE0,0x07,0x01,0xDC,0x3F,0xF8,0x00,
0x00,0x00,0xFF,0xFE,0x00,0x00,0x70,0x00,0x00,0xE0,0x07,0x01,0xFC,0x78,0xFF,0x00,
0x00,0x00,0xE0,0x1E,0x00,0x00,0x70,0x00,0x00,0xE0,0x07,0x00,0x7F,0xE0,0x3F,0x00,
0x00,0x00,0xC0,0x1C,0x00,0x00,0x70,0x00,0x00,0xC0,0x07,0x00,0x37,0x80,0x0C,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,
0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00

};

//--声明全局函数--//
void Delay10ms(unsigned int c);   //延时10ms

/*******************************************************************************
* 函 数 名         : main
* 函数功能		   : 主函数
* 输    入         : 无
* 输    出         : 无
*******************************************************************************/

void main()
{
	while(1)
	{
		LCD12864_DrowPic(&Photo1[0]);
		Delay10ms(500);
		LCD12864_DrowPic(&Photo2[0]);
		Delay10ms(500);	
	}	
}

/*******************************************************************************
* 函 数 名         : Delay10ms
* 函数功能		   : 延时函数，延时10ms
* 输    入         : 无
* 输    出         : 无
*******************************************************************************/

void Delay10ms(unsigned int c)   //误差 0us
{
    unsigned char a, b;

	//--c已经在传递过来的时候已经赋值了，所以在for语句第一句就不用赋值了--//
    for (;c>0;c--)
	{
		for (b=38;b>0;b--)
		{
			for (a=130;a>0;a--);
		}
           
	}
        
}