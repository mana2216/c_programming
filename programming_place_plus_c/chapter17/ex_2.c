#include <stdio.h>

int main(void) {
  int i;
  i = 0;
loop:
  printf("%d\n", i);
  ++i;
  if (i < 10) {
    goto loop;
  }
}