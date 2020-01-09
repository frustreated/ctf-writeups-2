/* C:\Users\User\Downloads\vitor\assets\xtszswemcwohpluqmi (11/29/1979 19:00:00)
   StartOffset(h): 00000000, EndOffset(h): 0000018F, Length(h): 00000190 */
#include <stdio.h>
unsigned char cipher[400] = {
    0xFE, 0xF3, 0xB7, 0xDE, 0x35, 0x06, 0xCA, 0xEF, 0x4C, 0x59, 0x1D, 0x20,
    0x83, 0x6D, 0x50, 0x71, 0xDA, 0xA0, 0x64, 0x82, 0x11, 0xF3, 0xB7, 0xD4,
    0x28, 0x06, 0xCA, 0xE5, 0x7F, 0x59, 0x1D, 0x36, 0xCE, 0xFD, 0xC0, 0xD7,
    0x5D, 0x6B, 0x77, 0xE3, 0x91, 0xE0, 0xCC, 0x1A, 0x40, 0xEA, 0x7E, 0x6F,
    0x33, 0x03, 0x0E, 0x5B, 0x29, 0x47, 0xC2, 0xCD, 0x70, 0x30, 0xC7, 0xF1,
    0x24, 0xA4, 0x37, 0xB3, 0x34, 0x97, 0x2F, 0x97, 0x96, 0x25, 0xAD, 0x1B,
    0x94, 0xF8, 0x08, 0xC3, 0x83, 0x30, 0x4E, 0xC6, 0xBA, 0x63, 0x27, 0x17,
    0xF9, 0x15, 0x9A, 0x53, 0xAB, 0x20, 0x8C, 0xFD, 0xA9, 0x74, 0x18, 0xBC,
    0xBA, 0x31, 0xF4, 0xEA, 0x77, 0x7A, 0x27, 0x1C, 0x04, 0x96, 0x42, 0xCE,
    0xFB, 0xCE, 0x0E, 0x94, 0x73, 0x88, 0x36, 0x26, 0x71, 0x35, 0xD8, 0xE1,
    0xE0, 0x63, 0xAE, 0xF0, 0x9C, 0xEB, 0x7E, 0x47, 0xC5, 0xBE, 0xA9, 0x7C,
    0x0E, 0xA1, 0xE4, 0xA9, 0x35, 0xF4, 0x37, 0x5F, 0x27, 0xA0, 0xB7, 0x98,
    0xBA, 0x07, 0xCA, 0xA9, 0xF1, 0x5A, 0x1D, 0xFA, 0x08, 0x6D, 0x50, 0x0B,
    0x5F, 0xA0, 0x64, 0x5C, 0x96, 0xF4, 0xB7, 0x6E, 0xAD, 0x07, 0xCA, 0xBF,
    0xE4, 0x5A, 0x1D, 0xF0, 0x3B, 0x6D, 0x50, 0x01, 0x72, 0xA0, 0x64, 0x52,
    0x89, 0xF4, 0xB7, 0x64, 0xC0, 0x07, 0xCA, 0xB5, 0x17, 0x5A, 0x1D, 0xC6,
    0x2E, 0x6D, 0x50, 0x17, 0x65, 0xA0, 0x64, 0x28, 0xD6, 0x7C, 0x14, 0xF9,
    0x21, 0x4C, 0xEA, 0xC8, 0xDC, 0x11, 0x7D, 0xD6, 0x63, 0x26, 0x78, 0x68,
    0x89, 0x18, 0xC9, 0x7E, 0xFE, 0xBA, 0x10, 0x30, 0xB7, 0x64, 0x6D, 0xC1,
    0x91, 0xD3, 0x7D, 0x09, 0x65, 0x66, 0x1F, 0x78, 0x9A, 0x91, 0xCE, 0xB7,
    0x10, 0x7C, 0xD7, 0x7D, 0xFC, 0x9C, 0x6A, 0x14, 0x41, 0x5B, 0x66, 0xE8,
    0x3C, 0x2E, 0x30, 0xF3, 0xA4, 0xEA, 0x06, 0x48, 0x2F, 0xBF, 0x25, 0x16,
    0x1D, 0xBC, 0x26, 0xFA, 0x52, 0xE1, 0xF1, 0x15, 0x8B, 0x76, 0x63, 0xDC,
    0x93, 0xB9, 0x57, 0x13, 0xAA, 0xEC, 0x84, 0x41, 0x7D, 0x1F, 0xF9, 0x70,
    0x34, 0x42, 0x2E, 0xA7, 0xCF, 0x76, 0x63, 0xD6, 0x86, 0xB9, 0x57, 0x05,
    0xCF, 0x7D, 0x14, 0xAB, 0x89, 0x8E, 0x69, 0xFA, 0xB6, 0xD3, 0xBE, 0x09,
    0xAB, 0xE6, 0xF3, 0x58, 0xF9, 0x29, 0xC7, 0x6F, 0xDE, 0x7D, 0x14, 0xBD,
    0x77, 0x8F, 0x69, 0xCC, 0xAA, 0xD3, 0xBE, 0x03, 0xE8, 0xE6, 0xF3, 0x52,
    0xCB, 0x29, 0xC7, 0x61, 0x78, 0x7C, 0x14, 0xB7, 0xAA, 0x8F, 0x69, 0xC6,
    0x5D, 0xD3, 0xBE, 0x15, 0x14, 0xE6, 0xF3, 0x24, 0xCF, 0x29, 0xC7, 0x7B,
    0x86, 0x7C, 0x14, 0x89, 0xB9, 0x8F, 0x69, 0xD8, 0x70, 0xD3, 0xBE, 0xEF,
    0x2B, 0xE6, 0xF3, 0x3E, 0xE2, 0x29, 0xC7, 0x4D, 0x95, 0x7C, 0x14, 0x83,
    0x4C, 0x80, 0x69, 0xD2, 0x07, 0xD3, 0xBE, 0xE1, 0x3E, 0xE6, 0xF3, 0x30,
    0xF1, 0x29, 0xC7, 0x47
};

void  dp3(unsigned char *p3enc, unsigned int K2_0)
{
  int i; // [esp+8h] [ebp-4h]

  for ( i = 0; i < 100; ++i )
  {
    *(unsigned int *)&p3enc[4 * i] ^= K2_0;
    K2_0 += 0x31333337;
  }
}

int main() {
    dp3(cipher, 0x4e27636e);
    for (int i = 0; i < sizeof(cipher); i++) {
        printf("%02x",cipher[i]);
    }
    printf("\n");
}