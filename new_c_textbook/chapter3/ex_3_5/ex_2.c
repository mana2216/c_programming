#include <stdio.h>

int main(void)
{
  int sum = 0;
  for (int i = 1; i <= 100; i++) {
    sum += i;
    printf("sum = %4d\n", sum);
  }

  return 0;
}