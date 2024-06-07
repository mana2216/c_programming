#include <stdio.h>

#define call(function, ...) (printf("Calling %s\n",\
(#function)),function(__VA_ARGS__))

void hello(void);
int add(int, int);

void hello(void) {
  printf("Hello!\n");
  return;
}

int add(int x, int y) {
  return x + y;
}

int main(void) {
  int z;

  call(hello);
  z = call(add, 2, 3);
  printf("%d\n", z);
  return 0;
}