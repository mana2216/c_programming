#include <stdio.h>
#include <stdlib.h>

#define ABSOLUTE_VALUE(number) (number < 0) ? -(number) : (number)

int main(void) {
  int num = -10;
  int abs_num = ABSOLUTE_VALUE(num);
  printf("%d\n", abs_num);
}