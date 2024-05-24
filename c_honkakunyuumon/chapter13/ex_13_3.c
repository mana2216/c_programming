#include <stdio.h>

#define ADD(a,b)      (a)+(b)

int main(void)
{
  int v = 16 / ADD(4, 4);
  printf("v = %d\n", v);
}