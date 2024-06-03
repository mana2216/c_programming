#include <stdio.h>

int main(void)
{
  unsigned int x = 0x02;
  unsigned int y = 0x08;
  unsigned int z = x | (y << 8);
  printf("%04x\n", z);
  return 0;
}