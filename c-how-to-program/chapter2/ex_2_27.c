#include <stdio.h>
#include <stdlib.h>

int main(void) {
  printf("%s", "Please input 4-digit number >> ");
  int val;
  scanf("%d", &val);
  if (val < 10000) {
    fputs("数値が範囲外です\n", stderr);
    exit(EXIT_FAILURE);
  }
  int sum = (val % 10) + (val / 10) + (val / 100) + (val / 1000);
  printf("sum = %d\n", sum);

  return 0;
}