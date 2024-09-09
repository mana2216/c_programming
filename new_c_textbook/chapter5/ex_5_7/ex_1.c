#include <stdio.h>

int main(void) {
  int x = 5;

  int sign;

  if (x > 0) {
    sign = 1;
  } else if (x == 0) {
    sign = 0;
  } else {
    sign = -1;
  }
  
  return 0;
}