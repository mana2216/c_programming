#include <stdio.h>

int num = 0;

void func(void);

int main(void) {
  for (int i = 0; i < 10; i++) {
    func();
  }
}

void func(void) {
  printf("%d\n", num);
  ++num;
}