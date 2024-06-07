#include <stdio.h>

extern inline int max(int, int);

inline int max(int x, int y) {
  return (x > y) ? x : y;
}

int winner1(int, int);
int winner2(int, int);

int main(void) {
  int w1, w2, champ;

  w1 = winner1(75, 78);
  w2 = winner2(81, 68);
  champ = max(w1, w2);
  printf("Gold Medal %d\n", champ);
  return 0;
}