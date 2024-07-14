#include <stdio.h>
#include <stdbool.h>

int main(void) {
  int value1 = 10;
  int value2 = 20;
  bool flag = true;

  printf("%d\n", value1 == value2);
  printf("%d\n", value1 != value2);
  printf("%d\n", value1 < value2);
  printf("%d\n", value1 <= value2);
  printf("%d\n", value1 > value2);
  printf("%d\n", value1 >= value2);
  return 0;
}