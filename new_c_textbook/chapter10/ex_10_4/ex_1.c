#include <stdio.h>

void hello(void);

void hello(void) {
  printf("Hello!\n");
}

int main(void) {
  void (*p)(void);

  p = hello;
  (*p)();
  p();

  p = &hello;
  (*p)();
  p();

  return 0;
}