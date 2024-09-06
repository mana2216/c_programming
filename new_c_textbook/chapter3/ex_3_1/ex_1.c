#include <stdio.h>

int main(void) {
  double s, a, b, h;
  printf("%s", "Please input top base >> "); scanf("%lf", &a);
  printf("%s", "Please input bottom base >> "); scanf("%lf", &b);
  printf("%s", "Please input hight >> "); scanf("%lf", &h);

  s = (a + b) * h / 2;

  printf("the area of trapezium is %lf\n", s);
  
  return 0;
}