#include <stdio.h>

int main(void) {
  enum Alpha {
    AAA,
    BBB,
    CCC = 10,
    DDD,
    EEE,
    FFF = -1,
  };
  printf("%d\n", FFF);
}