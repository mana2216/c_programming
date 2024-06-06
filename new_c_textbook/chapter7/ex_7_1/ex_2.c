#include <stdio.h>

int g(int x);

int main(void)
{
  int ans = g(2);
  printf("%d\n", ans);
  return 0;
}

int g(int x)
{
  return (2*x*x) + (3*x) + 1;
}