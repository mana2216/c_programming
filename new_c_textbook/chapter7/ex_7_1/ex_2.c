#include <stdio.h>

int g(int x) {
  return 2 * x * x + 3 * x + 1;
}

int main(void) {
  int x = 3;
  int ans = g(x);
  printf("%d\n", ans);
  
  return 0;
}