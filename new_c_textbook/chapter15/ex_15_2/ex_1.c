#include <stdio.h>

static int (*magic(void))[3];

int main(void) {
  int (*p)[3] = magic();
}

static int (*magic(void))[3] {
  static int a[3][3] = {
    {8, 1, 6},
    {3, 5, 7},
    {4, 9, 2},
  };
  return a;
}