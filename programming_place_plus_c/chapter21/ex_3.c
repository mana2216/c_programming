#include <stdio.h>

int main(void) {
  int num = 47;

  printf("%.2f\n", num / 100.0);
  printf("%.2f\n", (double)num / 100);
}