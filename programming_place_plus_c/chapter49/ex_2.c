#include <stdio.h>

int main(void) {
  unsigned int num = 1234;
  int count = 0;
  while (num > 0) {
    if (num & 1) {
      ++count;
    }
    num >>= 1;
  }
  printf("count = %d\n", count);
}