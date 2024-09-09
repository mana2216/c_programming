#include <stdio.h>

int main(void) {
  unsigned int x = 0x123456;
  unsigned int y = (x ^ 0xf0);
  printf("%x\n", y);
  
  return 0;
}