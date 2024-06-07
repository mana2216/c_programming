#include <stdio.h>

int main(void) {
  printf("file: %s\n", __FILE__);
  printf("date: %s\n", __DATE__);
  printf("time: %s\n", __TIME__);
  printf("line %d\n", __LINE__);
  return 0;
}