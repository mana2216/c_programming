#include <stdio.h>

double zero(void);

int main(void)
{
  double zero_num = zero();
  printf("%f\n", zero_num);
  return 0;
}

double zero(void)
{
  return 0.0;
}