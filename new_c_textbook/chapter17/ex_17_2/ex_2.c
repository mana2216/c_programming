#include <stdio.h>

typedef int Vector3[3];

int main(void) {
  Vector3 a = {1, 1, 1};
  size_t size = sizeof(a) / sizeof(a[0]);
  for (size_t i = 0; i < size; i++) {
    printf("a[%zu] = %d\n", i, a[i]);
  }
  return 0;
}