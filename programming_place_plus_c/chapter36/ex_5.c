#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int *value;
  int **ptr = &value;

  value = malloc(sizeof(int));
  *value = 100;

  printf("%d\n", *value);
  printf("%d\n", **ptr);

  free(value);
}