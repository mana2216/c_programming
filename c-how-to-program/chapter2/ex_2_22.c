#include <stdio.h>

int main(void) {
  printf("%s", "please input integer >> ");
  int value;
  scanf("%d", &value);

  if (value % 2 == 0) {
    printf("%s\n", "even");
  } else {
    printf("%s\n", "odd");
  }
  return 0;
}