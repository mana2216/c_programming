#include <stdio.h>

int main(void) {
  printf("%s", "Please input integer >> ");
  int value;
  scanf("%d", &value);

  printf("%d = %c\n", value ,value);

  return 0;
}