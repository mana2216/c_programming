#include <stdio.h>

void CopyIntArray(int *dest, int *src, int count);

int main(void)
{
  int array[10] = {0};
  int other_array[10];
  for (int i = 0; i < 10; i++) {
    other_array[i] = i+1;
  }
  CopyIntArray(array, other_array, 10);

  for (int i = 0; i < 10; i++) {
    printf("array[%d] = %d\n", i, array[i]);
  }
}

void CopyIntArray(int *dest, int *src, int count)
{
  for (int i = 0; i < count; i++) {
    *dest = *src;
    dest++;
    src++;
  }
}