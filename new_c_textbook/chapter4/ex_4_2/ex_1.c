#include <stdio.h>

int main(void) {
  double radius, area;
  printf("%s", "Please input double num >> ");
  scanf("%lf", &radius);
  area = (int)(3.14 * radius * radius);
  printf("%.0lf\n", area);
  
  return 0;
}