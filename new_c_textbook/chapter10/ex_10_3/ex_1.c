#include <stdio.h>

int g(void);
void f(int);
void swap(int*, int*);
double remquo(double, double, int*);
int *find(int, int[]);

int main(void) {
  int (*func_g)(void);
  void (*func_f)(int);
  void (*func_swap)(int *, int *);
  double (*remquo)(double, double, int*);
  int *(*func_find)(int, int[]);
}