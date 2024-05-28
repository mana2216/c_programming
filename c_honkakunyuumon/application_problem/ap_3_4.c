#include <stdio.h>

int main(void) {
  char *str = "ABCDEFGHIJKLMNOP";
  int *p = (int *)str;
  p++;
  p++;
  p++;
  printf("%s\n", (char *)p);
  return 0;
}