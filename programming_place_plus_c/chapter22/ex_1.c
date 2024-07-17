#include <stdio.h>

int num = 100;

void func(void);

int main(void) {
  {
    int num = 300;
    printf("%d\n", num);
  }
  func();
  printf("%d\n", num);
}

void func(void) {
  int num = 200;

  printf("%d\n", num);
  {
    printf("%d\n", num);
  }
}