#include <stdio.h>

int main(void) {
  int num, *p;

  num = 50;
  p = &num;

  printf("%d\n", *p);
}