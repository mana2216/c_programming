#include <stdio.h>
#include <string.h>

int main(void) {
  int a[5];

  memset(a, 0xff, sizeof(a));

  for (int i = 0; i < 5; i++) {
    printf("%u ", a[i]);
  }
  printf("\n");
}