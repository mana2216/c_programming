#include <stdio.h>
#include <assert.h>

int factorial(int);

int main(void) {
  int ans = factorial(5);
  printf("%d\n", ans);
}

int factorial(int num) {
  assert(num > 0);
  if (num == 1) {
    return 1;
  }
  return num * factorial(num - 1);
}