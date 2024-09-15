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
    printf("rsum(%d) returning %d\n", n, ret);
  }

  return ret;
}

int main(void) {
  debug = 1;

  int n = 3;

  printf("%d\n", rsum(n));

  return 0;
}