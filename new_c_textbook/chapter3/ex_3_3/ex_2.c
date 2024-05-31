#include <stdio.h>

int main(void)
{
  double radius, area;

  printf("radius? ");
  scanf("%lf", &radius);
  area = 3.1415926538979 * radius * radius;
  printf("area of the circle is %.1f\n", area);
  return 0;
}