#include <stdio.h>

int main(void) {
  printf("%s", "Please input character >> ");
  char chr;
  scanf("%c", &chr);
  printf("%c = %d\n", chr, chr);

  return 0;
}