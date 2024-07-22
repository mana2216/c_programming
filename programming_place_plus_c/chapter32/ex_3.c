#include <stdio.h>

int my_strlen(char *);

int main(void) {
  char *str = "abcd";
  printf("%d\n", my_strlen(str));
}

int my_strlen(char *s) {
  char *p = s;
  int index = 0;
  while (*p != '\0') {
    index++;
    p++;
  }
  return index;
}