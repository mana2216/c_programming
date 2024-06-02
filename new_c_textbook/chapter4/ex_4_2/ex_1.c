#include <stdio.h>

int main(void)
{
  double radius, area;
  radius = 3.0;
  area = (int)(3.14*radius*radius+0.5);
  printf("area = %lf\n", area);
}