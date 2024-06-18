#include <stdio.h>

int main(void) {
  printf("10文字ほど入力してください\n");
  char c;
  while ((c = getchar()) != '\n') {
    printf("%c", c);
  }
  printf("\n");
  return 0;
}