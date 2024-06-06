#include <stdio.h>

extern int debug;


int fib(int);

int main(void)
{
  debug = 1;
  for (int i = 1; i < 10; i++) {
    printf("fib(%d) = %d\n", i, fib(i));
  }
  return 0;
}