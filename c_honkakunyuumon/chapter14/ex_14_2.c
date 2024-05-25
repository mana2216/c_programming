#include <stdio.h>

int a[10];

int main(void)
{
  int b[10];

  printf("&a[0] = %p\n", a);
  printf("&b[0] = %p\n", b);
}