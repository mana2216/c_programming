#include <stdio.h>

int main(void)
{
  double sum = 0.0;
  for (int i = 0; i < 10; i++) {
    sum += 0.1;
  }

  if (sum == 1.0) {
    puts("sum is 1.0");
  } else {
    puts("sum is not 1.0");
  }

  return 0;
}