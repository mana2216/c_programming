#include <stdio.h>

int main(void)
{
  int sum = 0;
  int n;
  for (;;) {
    printf("number? ");
    scanf("%d", &n);
    if (n == 0) {
      printf("sum = %d\n", sum);
      break;
    } else if (n < 0) {
      printf("Please input positive number\n");
      continue;
    } else {
      sum += n;
    }
  }
  return 0;
}