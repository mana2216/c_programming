#include <stdio.h>
#include <limits.h>

void selective_sort(int *p[], int n);

int main(void) {
  int a[] = {5, 8, 3, 1, 2, 4, 9, 0};
  int *p[] = {
    &a[0], &a[1], &a[2], &a[3],
    &a[4], &a[5], &a[6], &a[7],
  };

  selective_sort(p, 8);
  printf("a : ");
  for (int i = 0; i < 8; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");

  printf("p : ");
  for (int i = 0; i < 8; i++) {
    printf("%d ", *p[i]);
  }
  printf("\n");
  return 0;
}

void selective_sort(int **p, int n) {
  for (int i = 0; i < n; i++) {
    int index = i;
    for (int j = i+1; j < n; j++) {
      if (*p[index] > *p[j]) {
        index = j;
      }
    }
    if (index != i) {
      int *tmp = p[i];
      p[i] = p[index];
      p[index] = tmp;
    }
  }
}