#include <stdio.h>
#include <string.h>

union data2 {
  int i;
  double d;
  char s[17];
};

int main(void) {
  union data2 z;
  printf("sizeof(z) = %zu\n", sizeof(z));
  printf("sizeof(z.i) = %zu\n", sizeof(z.i));
  printf("sizeof(z.d) = %zu\n", sizeof(z.d));
  printf("sizeof(z.s) = %zu\n", sizeof(z.s));
}