#include <stdio.h>

int sum(int n);

int main(void)
{
  while (1) {
    int n;
    printf("n?(0を入力すると終了します) ");
    scanf("%d", &n);
    if (n == 0) {
      break;
    }
    int ans = sum(n);
    printf("%d\n", ans);
  }
  return 0;
}

int sum(int n)
{
  int total = 0;
  for (int i = 1; i <= n; i++) {
    total += i;
  }
  return total;
}