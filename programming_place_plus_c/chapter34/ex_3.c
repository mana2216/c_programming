#include <stdio.h>
#include <assert.h>

void *my_memcpy(void *s1, const void *s2, size_t size);

int main(void) {
  int array1[5] = {};
  int array2[5] = {1, 2, 3, 4, 5};
  size_t size = sizeof(int) * 5;
  my_memcpy(array1, array2, size);
  for (size_t i = 0; i < 5; i++) {
    printf("%d\n", array1[i]);
  }
}

void *my_memcpy(void *s1, const void *s2, size_t size) {
  assert(s1 != NULL);
  assert(s2 != NULL);

  char *p1 = s1;
  const char *p2 = s2;
  for (size_t i = 0; i < size; i++) {
    *p1 = *p2;
    p1++;
    p2++;
  }
  return (void*)p1;
}