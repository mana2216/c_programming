#include <stdio.h>

double ncharge(int n);

int main(void) {
  int n = 3;
  double ans = ncharge(n);
  printf("%g\n", ans);
  
  return 0;
}

double ncharge(int n) {
  return 1.602E-19 * (double)n;
}