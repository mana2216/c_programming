#include <stdio.h>

#define SWAP(num1, num2, type) {type tmp = num1;\
                              num1 = num2;\
                              num2 = tmp;}

int main(void) {
  int num1 = 9;
  int num2 = 22;
  SWAP(num1, num2, int);
  printf("num1 = %d, num2 = %d\n", num1, num2);
} 