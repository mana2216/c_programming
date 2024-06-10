#include <stdio.h>

int main(void) {
  int x = 99;
  int *p = &x;
  p = (void *)p;
  p = (int *)p;
  printf("%d\n", *p);
  return 0;
}