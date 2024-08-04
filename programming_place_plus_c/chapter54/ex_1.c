#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand((unsigned int)time(NULL));
  int n = rand() % 10 - 10;
  printf("%d\n", n);
}