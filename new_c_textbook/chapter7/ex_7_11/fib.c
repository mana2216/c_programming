#include <stdio.h>

extern int debug;
int fib(int);

int debug = 1;

int fib(int n) {
  int ret;

  if (n == 1 || n == 2) {
    ret = 1;
  } else {
    ret = fib(n - 2) + fib(n - 1);
  }

  if (debug) {
    printf("fib(%d) returning %d\n", n, ret);
  }

  return ret;
}