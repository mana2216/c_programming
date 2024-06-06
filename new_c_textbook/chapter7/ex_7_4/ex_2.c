#include <stdio.h>

void nhello(int n) {
  int i;
  for (i = 0; i < n; i++) {
    printf("Hello!");
  }
  printf("\n");
  return;
}

int main(void)
{
  nhello(3);
  return 0;
}