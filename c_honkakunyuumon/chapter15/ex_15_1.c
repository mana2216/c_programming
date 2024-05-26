#include <stdio.h>
#include <assert.h>

double Lerp(double a, double b, double t);

int main(void)
{
  double a = 1.0;
  double b = 2.0;
  double t = 5.0;
  double ans = Lerp(a, b, t);
  printf("ans = %.2lf\n", ans);
}

double Lerp(double a, double b, double t)
{
  assert(0.0 <= t && t <= 1.0);

  return a + (b - a) * t;
}