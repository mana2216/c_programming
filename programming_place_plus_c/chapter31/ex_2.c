#include <stdio.h>

int main(void) {
  int num1 = 0, num2 = 15;
  int *p;

  p = &num1;
  *p = *p + num2;

  p = &num2;
  *p = *p + num1;

  printf("num1:%d num2:%d\n", num1, num2);
}