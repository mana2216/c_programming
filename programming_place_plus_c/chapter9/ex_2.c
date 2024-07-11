#include <stdio.h>

int func(int n);

int main(void) {
  int n = 2;
  int result = func(n);
  printf("%d\n", result);
}

int func(int n) {
  return n * n;
}