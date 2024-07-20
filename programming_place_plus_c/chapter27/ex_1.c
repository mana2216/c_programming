#include <stdio.h>

int main(void) {
  int num1 = 10, num2 = 20, num3 = 30;
  printf("%d %d %d\n", num1, num2, num3);

  num2 = num1 = num3;
  printf("%d %d %d\n", num1, num2, num3);
}