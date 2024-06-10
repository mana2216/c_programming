#include <stdio.h>

int *find(int n, int *ans, int a[]);

int *find(int n, int *ans, int a[]) {
  int i;

  for (i = 0; a[i] != -1; i++) {
    if (a[i] == n) {
      break;
    }
  }
  *ans = i;
  return &a[i];
}

int main(void) {
  int a[] = {2, 5, 9, 3, 5, 4, 1, 6, -1};
  int *p;
  int ans;

  p = find(4, &ans, a);
  if (*p == -1) {
    printf("Not found\n");
  } else {
    printf("Index = %d Found %d\n", ans, *p);
  }

  return 0;
}