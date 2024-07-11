#include <stdio.h>

void f1(int n);
void f2(int n1, int n2);

int main(void) {
  f1(1);
  f2(10, 20);
}

void f1(int n) {
  f2(n, n + 1);
}

void f2(int n1, int n2) {
  printf("%d, %d\n", n1, n2);
}