#include <stdio.h>
#include <limits.h>

int main(void) {
  int array[10];
  for (int i = 0; i < 10; i++) {
    printf("array[%d] >> ", i);
    scanf("%d", &array[i]);
  }
  int size = (int)sizeof(array) / (int)sizeof(array[0]);

  for (int i = 0; i < size; i++) {
    int swapped = 0;
    for (int j = 0; j < size - 1 - i; j++) {
      if (array[j+1] < array[j]) {
        int tmp = array[j];
        array[j] = array[j+1];
        array[j+1] = tmp;
        swapped = 1;
      }
    }
    if (!swapped) {
      break;
    }
  }

  for (int i = 0; i < size; i++) {
    printf("array[%d] = %d\n", i, array[i]);
  }
  return 0;
}