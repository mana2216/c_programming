#include <stdio.h>

int main(void) {
  int x, *p = NULL;

  x = *p;
  printf("x = %d\n", x);
  return 0;
}