#include <stdio.h>

void rev(int array[], int size);

int main(void) {
  int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int size = (int)sizeof(array) / (int)sizeof(array[0]);
  rev(array, size);
  for (int i = 0; i < size; i++) {
    printf("%d\n", array[i]);
  }
  return 0;
}

void rev(int array[], int size) {
  for (int i = 0; i < size; i++) {
    int back_index = size - 1 - i;
    if (i == back_index) {
      break;
    } else {
      int tmp = array[i];
      array[i] = array[back_index];
      array[back_index] = tmp;
    }
  }
}