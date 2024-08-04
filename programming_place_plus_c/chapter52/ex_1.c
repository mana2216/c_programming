#include <stdio.h>
#include <stdarg.h>

int my_sum(int, ...);

int main(void) {
  int total = my_sum(5, 1, 2, 3, 4, 5);
  printf("%d\n", total);
}

int my_sum(int size, ...) {
  va_list args;
  va_start(args, size);
  int total = 0;
  for (int i = 0; i < size; i++) {
    total += va_arg(args, int);
  }
  va_end(args);
  return total;
}