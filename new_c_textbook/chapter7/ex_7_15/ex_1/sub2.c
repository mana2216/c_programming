#include <stdio.h>

inline int max(int, int);

inline int max(int x, int y) {
  return (x > y) ? x : y;
}

int winner2(int x, int y) {
  int z;

  z = max(x, y);
  printf("%d wins\n", z);
  return z;
}