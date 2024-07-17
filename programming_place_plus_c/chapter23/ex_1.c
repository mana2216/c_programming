#include <stdio.h>

#define PI (3.14)

int main(void) {
  double r = 5;
  double circle_area = r * r * PI;
  printf("%lf\n", circle_area);
  return 0;
}