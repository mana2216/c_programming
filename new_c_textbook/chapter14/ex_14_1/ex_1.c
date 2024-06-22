#include <stdio.h>

int add(int, int);
int sub(int, int);
int mul(int, int);
int div(int, int);

int main(void) {
  int (*funcs[])(int, int) = {&add, &sub, &mul, &div, NULL};
  int (**p)(int, int);
  int x, y, z;

  printf("x = ");
  scanf("%d", &x);
  printf("y = ");
  scanf("%d", &y);
  for (p = funcs; *p; p++) {
    z = (*p)(x, y);
    printf("%d ", z);
  }
  printf("\n");
  return 0;
}

int add(int x, int y) { return x + y; }
int sub(int x, int y) { return x - y; }
int mul(int x, int y) { return x * y; }
int div(int x, int y) { return x / y; }