#include <stdio.h>

#define MULT(a,b)     a*b

int main(void)
{
  int v = MULT(3+4, 5+6);
  printf("v = %d\n", v);
}