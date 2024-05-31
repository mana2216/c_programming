#include <stdio.h>

int main(void)
{
  double sum1 = 0.0;
  for (int i = 0; i < 8; i++) {
    sum1 += 0.125;
  }

  if (sum1 == 1.0) {
    puts("sum1 is 1.0");
  } else {
    puts("sum1 is not 1.0");
  }

  double sum2 = 0.0;
  for (int i = 0; i < 20; i++) {
    sum2 += 0.05;
  }

  if (sum2 == 1.0) {
    puts("sum2 is 1.0");
  } else {
    puts("sum2 is not 1.0");
  }

  return 0;
}