#include <stdio.h>

int f(int);
double g(double, double);
short int h(short int, short int);

int f(int x) {return x + 1;}
double g(double x, double y) {return x*y;}
short int h(short int sn1, short int sn2) {
  return sn1 + sn2;
}

int main(void) {
  void (*p)();
  int (*ifp)(int);
  double (*dfp)(double, double);
  short int (*sfp)(short int, short int);

  p = (void(*)())&f;
  ifp = (int(*)(int))p;
  printf("%d\n", (*ifp)(2));

  p = (void(*)())&g;
  dfp = (double(*)(double, double))p;
  printf("%f\n", (*dfp)(3.0, 4.0));

  sfp = &h;
  printf("%d\n", (*sfp)(10, 10));

  return 0;
}