#include <stdio.h>

int main(void)
{
  double s, a, b, h;
  printf("a >> ");
  scanf("%lf", &a);
  printf("b >> ");
  scanf("%lf", &b);
  printf("h >> ");
  scanf("%lf", &h);

  s = (a+b) * h / 2;
  printf("area of trapezium = %.2lf\n", s);
  return 0;
}