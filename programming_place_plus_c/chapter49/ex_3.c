#include <stdio.h>

int func(unsigned int, unsigned int);

int main(void) {
  // a と b の共通部分をなくした、aまたはb
}
int func(unsigned int a, unsigned int b) {
  return ((a | b) & ~(a & b));
}
