#include <stdio.h>

int main(void)
{
  unsigned char a = 0x25;
  unsigned char b = 0x6e;

  printf("~a = 0x%02x\n", (unsigned char)~a);
  printf("a | b = 0x%x\n", (unsigned char)(a | b));
  printf("a & b = 0x%x\n", (unsigned char)(a & b));
  printf("a ^ b = 0x%x\n", (unsigned char)(a ^ b));
  printf("a >> 2 = 0x%x\n", (unsigned char)(a >> 2));
  printf("a & (b >> 1) = 0x%x\n", (unsigned char)(a & (b >> 1)));
}