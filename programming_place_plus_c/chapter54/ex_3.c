#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand((unsigned int)time(NULL));
  double n = (double)rand() / RAND_MAX;
  printf("%lf\n", n);
}