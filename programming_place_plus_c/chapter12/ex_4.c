#include <stdio.h>

int main(void) {
  int result = 1;
  for (int i = 0; i < 10; i++) {
    result *= 2;
    printf("%d回目 : %d\n", i+1, result);
  }
  return 0;
}