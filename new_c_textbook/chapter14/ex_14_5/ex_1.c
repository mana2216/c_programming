#include <stdio.h>

void addVec(int, double *, double *, double *);

void addVec(int dim, double *a, double *b, double *c) {
  while (dim--) {
    *a++ = *b++ + *c++;
  }
  return;
}

int main(void) {
  double a[3];
  addVec(3, a, (double[]){1.0, 2.5, 4.0}, (double[]){2.0, 2.0, 2.0});
  printf("(%g, %g, %g)\n", a[0], a[1], a[2]);
  return 0;
}