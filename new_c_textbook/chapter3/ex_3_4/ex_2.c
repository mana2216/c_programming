#include <stdio.h>

int main(void) {
  double x = 0.0;
  double y = 0.0;

  for (int i = 0; i < 8; i++) {
    x += 0.125;
  }

  for (int i = 0; i < 20; i++) {
    y += 0.05;
  }

  printf("x => %.20lf\n", x);
  printf("y => %.20lf\n", y);
  
  return 0;
}