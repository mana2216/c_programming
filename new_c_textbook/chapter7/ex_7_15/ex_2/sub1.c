#include <stdio.h>

static inline int max(int, int);

static inline int max(int x, int y) {
  return (x > y) ? x : y;
}

int winner1(int x, int y) {
  int z;

  z = max(x, y);
  printf("%d wins\n", z);
  return z;
}