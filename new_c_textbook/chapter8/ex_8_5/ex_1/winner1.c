#include "winner.h"

int winner1(int x, int y) {
  int z;

  if (debug) {
    printf("winner1:%d vs %d\n", x, y);
  }

  z = max(x, y);
  printf("%d wins\n", z);
  return z;
}