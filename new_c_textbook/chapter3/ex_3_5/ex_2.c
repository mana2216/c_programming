#include <stdio.h>

int main(void) {
  int sum = 0;

  for (int i = 1; i <= 100; i++) {
    sum += i;
    printf("%5d\n", sum);
  }
  
  return 0;
}