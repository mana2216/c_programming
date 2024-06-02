#include <stdio.h>

int main(void)
{
  unsigned char uc;
  long int z;

  uc = 2;
  z = (uc + 1) * (1L * 2U);
  printf("z = %ld\n", z);// z = long int
  return 0;
}