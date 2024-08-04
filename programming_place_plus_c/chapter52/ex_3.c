#include <stdio.h>
#include <stdarg.h>

void my_assign(int array[], int size, ...);

int main(void) {
  int size = 5;
  int array[size];
  my_assign(array, size, 1, 2, 3, 4, 5);
  for (int i = 0; i < size; i++) {
    printf("%d\n", array[i]);
  }
}

void my_assign(int array[], int size, ...) {
  va_list args;
  va_start(args, size);
  for (int i = 0; i < size; i++) {
    array[i] = va_arg(args, int);
  }
  va_end(args);
}