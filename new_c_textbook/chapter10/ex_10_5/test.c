#include <stdio.h>

int f(float, short int);

int f(float f, short int s) {
  return f + s;
}

int main(void) {
  int (*p)();
  int n;

  p = &f;
  n = (*p)(3.0F, (short int)2);
  printf("%d\n", n);
  return 0;
}