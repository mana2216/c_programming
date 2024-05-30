#include <stdio.h>

int main(void) {
  int value;
  printf("value? ");
  scanf("%d", &value);
  if (value > 0) {
    puts("OK");
  } else {
    puts("NG");
  }
  return 0;
}