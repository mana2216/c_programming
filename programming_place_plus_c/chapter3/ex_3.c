#include <stdio.h>

int main(void) {
  printf("%d\n", 3 % 1);
  printf("%d\n", 3 % 2);
  printf("%d\n", 3 % 3);
  printf("%d\n", 3 % 4);
  printf("%d\n", 3 % -1);
  printf("%d\n", 3 % -2);
  printf("%d\n", 3 % -3);
  printf("%d\n", 3 % -4);
  return 0;
}