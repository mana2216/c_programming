#include <stdio.h>

int findmax(int []);

int main(void) {
  int ans = findmax((int []){3, 4, 2, 9, -1});
  printf("%d\n", ans);
  return 0;
}

int findmax(int a[]) {
  int max;

  for (max = *a; *a != -1; a++) {
    if (*a > max) {
      max = *a;
    }
  }
  return max;
}