#include <stdio.h>

int main(void) {
  int a[] = {3, 4, 0, 5, 9, 11, 32, 1, 88, 66};

  for (int i = 0; i < 9; i++) {
    int min = i;
    for (int j = i + 1; j < 10; j++) {
      if (a[j] < a[min]) {
        min = j;
      }
    }
    int tmp = a[i];
    a[i] = a[min];
    a[min] = tmp;
  }

  for (int i = 0; i < 10; i++) {
    printf("%d\n", a[i]);
  }
}