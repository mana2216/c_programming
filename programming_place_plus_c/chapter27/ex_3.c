#include <stdio.h>
#include <string.h>

int main(void) {
  char s[] = "abcdefghij";
  for (int i = 0, j = strlen(s)-2; j >= 0; i++, j--) {
    printf("%c  %c\n", s[i], s[j]);
  }
}