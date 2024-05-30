#include <stdio.h>

int main(void) {
  int x, y, z;

  printf("long boundary?");
  scanf("%d", &x);
  printf("short boundary?");
  scanf("%d", &y);
  z = x * y;
  printf("area is %d\n", z);
  return 0;
}