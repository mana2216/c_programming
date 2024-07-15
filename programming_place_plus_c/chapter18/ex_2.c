#include <stdio.h>

int main(void) {
  for (unsigned int i = 0; i < 17; i++) {
    printf("8進数 : %#3o, 10進数 : %3d, 16進数 : %#3x\n", i, i, i);
  }
}