#include <stdio.h>

int main(void)
{
  unsigned int x = 4;
  unsigned int y = (x^0xf0);
  printf("%04x\n", y);
  return 0;
}