#include <stdio.h>
#include <string.h>

#define COUNT_ARRAY(array) (sizeof(array) / sizeof(array[0]))

int main(void) {
  int array[3] = {};
  int size = COUNT_ARRAY(array);
  printf("%d\n", size);
}