#include <stdio.h>

double zero(void);

int main(void) {
  double x = zero();
  printf("%lf\n", x);
  
  return 0;
}

double zero(void) {
  return 0.0;
}