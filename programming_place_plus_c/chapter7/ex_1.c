#include <stdio.h>

int main(void) {
  int value = 10;
  int value2 = -10;

  value = value2;
  printf("%d, %d\n", value, value2);

  value2 = value + 5;
  printf("%d, %d\n", value, value2);

  value = value2 = 100;
  printf("%d, %d\n", value, value2);
  return 0;
}