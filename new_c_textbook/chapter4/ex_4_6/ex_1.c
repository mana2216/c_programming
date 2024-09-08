#include <stdio.h>

int main(void) {
  unsigned char uc;
  long int z;

  uc = 2;

  z = (uc + 1) * (1L + 2U);
  // uc + 1 => int
  // 1L + 2U => long
  // (uc + 1) * (1L + 2U) => int * long => long
  printf("sizeof(z) => %zu\n", sizeof(z));
  printf("z = %ld\n", z);
  
  return 0;
}