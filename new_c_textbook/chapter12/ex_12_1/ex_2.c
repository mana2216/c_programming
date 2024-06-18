#include <stdio.h>

int main(void) {
  printf("10文字まで入力してください >> ");
  for (int i = 0; i < 10; i++) {
    char c = getchar();
    printf("%c", c);
  }
  return 0;
}