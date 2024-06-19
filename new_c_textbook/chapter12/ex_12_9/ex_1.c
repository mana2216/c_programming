#include <stdio.h>
#include <string.h>

int main(void) {
  char s[1024];
  char *p;
  p = s;
  strcpy(p, "Hello, world!");
  printf("%s\n", p);
  return 0;
}