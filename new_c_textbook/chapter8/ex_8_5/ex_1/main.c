#include "winner.h"

int max(int x, int y) {
  if (debug) {
    printf("comparing %d and %d\n", x, y);
  }
  return (x > y) ? x : y;
}

int debug;

int main(void) {
  int w1, w2, champ;

  debug = 1;
  w1 = winner1(75, 78);
  w2 = winner2(81, 68);
  champ = max(w1, w2);
  printf("Gold Medal %d\n", champ);
  return 0;
}