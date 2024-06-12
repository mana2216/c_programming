#include <stdio.h>
#include <time.h>

int main(void) {
  time_t t;
  time(&t);
  printf("t = %ld\n", t);
  return 0;
}