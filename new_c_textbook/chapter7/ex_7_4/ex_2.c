#include <stdio.h>

void nhello(int n);

int main(void) {
  int n = 3;
  nhello(n);
  
  return 0;
}

void nhello(int n) {
  int i;

  for (i = 0; i< n; i++) {
    printf("%s ", "Hello!");
  }

  printf("%s", "\n");
}