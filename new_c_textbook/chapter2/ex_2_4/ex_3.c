#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand((unsigned)time(NULL));
  int count = 2;
  while (count > 0) {
    int x = rand();
    printf("%d\n", x);
    count--;
  }
  return 0;
}