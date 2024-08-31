#include <stdio.h>

int main(void) {
  printf("%s", "Please input three integer; >> ");
  int val_1, val_2, val_3;
  scanf("%d %d %d", &val_1, &val_2, &val_3);

  int array[] = {val_1, val_2, val_3};

  for (int i = 2; i > 0; i--) {
    for (int j = 0; j > i; j++) {
      if (array[j] > array[j+1]) {
        int tmp = array[j];
        array[j] = array[j+1];
        array[j+1] = tmp;
      }
    }
  }
  
  for (int i = 0; i < 3; i++) {
    printf("%d\n", array[i]);
  }
  
  return 0;
}