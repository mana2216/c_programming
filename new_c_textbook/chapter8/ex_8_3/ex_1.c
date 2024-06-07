#include <stdio.h>

#define InitA(n) int a##n = n

int main(void) {
  InitA(0);
  InitA(1);
  InitA(2);

  printf("a0 = %d, a1 = %d, a2 = %d\n", a0, a1, a2);
  return 0;
}