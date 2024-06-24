#include <stdio.h>

int (*f(int s))(int, int);

int main(void) {
  int (*func)(int, int);
  int tmp;
  func = f(tmp);
  func(3, 4);
}