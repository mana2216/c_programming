#include <stdio.h>

int main(void) {
  int x = 2;

  if (x != 2) {
    #error "x is not 2!"
  } else {
    printf("%d\n", x);
  }
  return 0;
}