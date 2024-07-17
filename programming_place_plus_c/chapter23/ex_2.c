#include <stdio.h>

#define PUT_SW

void func(int num);

int main(void) {
  func(1);

#undef PUT_SW
  func(2);

#define PUT_SW
  func(3);

#undef PUT_SW
  func(4);
}

void func(int num) {
#ifdef PUT_SW
  printf("%d\n", num);
#endif
}