#include <stdio.h>

short int add1(int);
short int add(int, int);

int main(void) {
  short int a = 2, b = 3, c = 4;
  short int x, y;
  short int (*p)();
  p = &add1;
  x= (*p)(a);
  p = &add;
  y = (*p)(b, c);

  printf("x = %d\n", x);
  printf("y = %d\n", y);
  return 0;
}

short int add1(int a) {
  return a;
}
short int add(int b, int c) {
  return b + c;
}
