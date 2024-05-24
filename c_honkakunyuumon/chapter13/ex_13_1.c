#include <stdio.h>

#define VALUES1       1+2
#define VALUES2       3+4

int main(void)
{
  int v = VALUES1 * VALUES2;
  printf("v = %d\n", v);
}