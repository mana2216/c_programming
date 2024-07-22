#include <stdio.h>

int main(void) {
  int array[5] = {1, 2, 3, 4, 5};
  int *p;

  for (int i = 0; i < 5; ++i) {
    p = &array[i];
    printf("%d ", *p);
  }
  printf("\n");
}