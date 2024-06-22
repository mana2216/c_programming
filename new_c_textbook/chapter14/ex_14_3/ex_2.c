#include <stdio.h>

// int a[2][3][4]
// int o          a[2][3][4]
// int o[4]       a[2][3]
// int o[3][4]    a[2]
// int o[2][3][4]

int main(void) {
  printf("int o = %zu\n", sizeof(int));
  printf("int o[4] = %zu\n", sizeof(int[4]));
  printf("int o[3][4] = %zu\n", sizeof(int[3][4]));
  printf("int o[2][3][4] = %zu\n", sizeof(int[2][3][4]));
}