#include <stdio.h>

int main(void) {
  double x = 0.0;

  for (int i = 0; i < 10; i++) {
    x += 0.1;
  }

  if (x == 0.1) {
    printf("%s\n", "x is equal 0.1");
  } else {
    printf("%s\n", "x is NOT equal 0.1");
  }
  
  return 0;
}