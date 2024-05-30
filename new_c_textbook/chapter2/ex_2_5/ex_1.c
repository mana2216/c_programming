#include <stdio.h>

// どこでエラーが起こるかわからない

int main(void) {
  int i;
  i = 0;
  while (i < 5) {
    printf("%d\n", i);
    i = i + 1;
  }

  return 0;
}