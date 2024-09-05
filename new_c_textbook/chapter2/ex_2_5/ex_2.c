#include <stdio.h>

int main(void) {
  int x, *p, *q;

  p = q;
  x = *p;
  q = &x;
  *q = 2;
  
  return 0;
}