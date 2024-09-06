#include <stdio.h>

int main(void) {
  double radius, area;

  printf("radius? ");
  scanf("%lf", &radius);

  area = 3.14159265358979 * radius * radius;
  printf("area of the circle is %.1lf\n", area);
  
  return 0;
}