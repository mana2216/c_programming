#include <stdio.h>

int main(void) {
  const int array_size = 10;
  int array[array_size] = {};

  int result = 1;
  for (int i = 0; i < array_size; i++) {
    result *= 2;
    array[i] = result;
  }

  for (int i = array_size - 1; i >= 0; i--) {
    printf("array[%d] = %d\n", i, array[i]);
  }
}