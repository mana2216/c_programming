#include <stdio.h>

int main(void) {
  for (int i = 1; i <= 50; i++) {
    if (i % 4 == 0) {
      printf("%d\n", i);
    }
  }
}