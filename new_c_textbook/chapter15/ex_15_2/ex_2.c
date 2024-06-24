#include <stdio.h>

int (*magic(void))[3];

int main(void) {
  int (*p)[3] = magic();
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", p[i][j]);
    }
    printf("\n");
  }
}

int (*magic(void))[3] {
  static int a[3][3] = {
    {8, 1, 6},
    {3, 5, 7},
    {4, 9, 2},
  };
  return a;
}