#include <stdio.h>

int main(void) {
  char str[] = "abc\0def";

  for (int i = 0; str[i] != '\0'; i++) {
    printf("%c\n", str[i]);
  }
}