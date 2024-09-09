#include <stdio.h>

int main(void) {
  unsigned int x = 0xaa12;
  unsigned int y = 0xbb34;
  unsigned int tmp_x = (x & 0xff);
  unsigned int tmp_y = (y & 0xff);
  unsigned int z = (tmp_x << 8) | tmp_y;
  printf("0x%x\n", z);
  
  return 0;
}