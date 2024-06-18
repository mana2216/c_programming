#include <stdio.h>
#include <ctype.h>

int main(void) {
  int c;
  while ((c = getchar()) != EOF) {
    c = toupper(c);
    printf("%c", c);
  }
  return 0;
}