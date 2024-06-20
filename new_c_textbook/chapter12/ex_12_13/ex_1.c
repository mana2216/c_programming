#include <stdio.h>
#include <stdarg.h>

void debug(const char *, char *, ...);
int add(int x, int y);
int sub(int x, int y);

int main(void) {
  int z;
  z = add(2, 3);
  printf("%d\n", z);
  z = sub(2, 3);
  printf("%d\n", z);
  return 0;
}