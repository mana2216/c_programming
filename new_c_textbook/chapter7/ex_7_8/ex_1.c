#include <stdio.h>

extern int debug;

int rsum(int);

int debug;

int rsum(int n) {
  int ret;
  if (n == 0) {
    ret = 0;
  } else {
    ret = n + rsum(n - 1);
  }

  if (debug) {
    printf("rsum(%d)returning%d\n", n, ret);
  }
  return ret;
}

int main(void)
{
  int x;
  debug = 1;

  x = rsum(4);
  printf("%d\n", x);
  return 0;
}