#include <stdio.h>

typedef int *IntPtr;

int main(void) {
  IntPtr p, q;
  printf("*p = %p\n", &p);
  printf("*q = %p\n", &q);
}