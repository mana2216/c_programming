#include <stdio.h>

int main(void) {
  int value;
  printf("value? ");
  scanf("%d", &value);
  if (value > 0) {
    puts("plus");
  } else if (value < 0) {
    puts("minus");
  } else {
    puts("zero");
  }
  return 0;
}