#include <stdio.h>

void count(void)
{
  int counter = 0;

  counter++;
  printf("%d\n", counter);
  return;
}

int main(void)
{
  count();
  count();
  count();
  return 0;
}