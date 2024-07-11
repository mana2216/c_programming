#include <stdio.h>

int main(void) {
  int a = 10;
  int b = 2;
  int tmp = a;
  a = b;
  b = tmp;
  printf("a = %d, b = %d\n", a, b);
  return 0;
}