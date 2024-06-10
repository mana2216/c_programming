#include <stdio.h>

void zero(double *);

int main(void) {
  double num = 2.0;
  zero(&num);
  printf("num = %.1f\n", num);
  return 0;
}

void zero(double *num) {
  *num = 0.0;
}