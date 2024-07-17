#include <stdio.h>

int num = 100;

int main(void) {
  {
    int num;
    num = 10;
    printf("%d\n", num);
  }
  printf("%d\n", num);
}