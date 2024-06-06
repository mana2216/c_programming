#include <stdio.h>

double nchange(double n);

int main(void)
{
  double ans = nchange(3.0);
  printf("%e\n", ans);
}

double nchange(double n)
{
  return 1.602e-19 * n;
}