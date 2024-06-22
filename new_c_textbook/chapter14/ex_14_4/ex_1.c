#include <stdio.h>

int main(void) {
  int a[12] = {
    100, 101, 102, 103,
    104, 105, 106, 107,
    108, 109, 110, 111
  };
  int *p;

  p = a;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      printf("%d ", p[j]);
    }
    putchar('\n');
    p++;
  }
  return 0;
}