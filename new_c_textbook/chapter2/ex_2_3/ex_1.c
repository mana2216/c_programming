#include <stdio.h>

int main(void) {
  int value;
  printf("value? ");
  scanf("%d", &value);

  if (value < 0) {
    printf("value が負の数になっています。\n");
    return 1;
  }

  while (value >= 0) {
    printf("value = %d\n", value);
    value--;
  }
  return 0;
}