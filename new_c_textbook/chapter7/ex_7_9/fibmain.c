#include <stdio.h>

int fib(int);

int main(void)
{
  for (int i = 1; i < 10; i++) {
    printf("fib(%d)=%d\n", i, fib(i));
  }
}