#include <stdio.h>

int main(void) {
  int a[12] = {0};
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      printf("[%d][%d] = %d\n", i, j, a[i*4+j]);
    }
  }
}