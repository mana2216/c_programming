#include <stdio.h>

int main(void)
{
  int x, y, z, a, b;
  ((x+(y*2))+z);
  (x+(y*(2+z)));
  ((x*a)+(b/y));
  ((x*(a+b))/y);
  ((-x)*y);
  (((-x)*(-y)));
}