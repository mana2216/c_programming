#include <stdio.h>

int main(void) {
  int a[] = { 0, 0, 1, 1, 0, 1, -1 };

  int count = 0;

  for (int *p = a; *p >= 0; p++) {
    if (*p == 1) {
      count++;
    }
  }

  printf("1は%d回出現\n", count);

  return 0;
}