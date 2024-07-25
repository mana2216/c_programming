#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *str_duplicate(const char *s);

char *str_duplicate(const char *s) {
  char *dup = malloc(strlen(s) + 1);
  strcpy(dup, s);

  return dup;
}

int main(void) {
  char *s = "abcd";
  char *tmp = str_duplicate(s);
  tmp[0] = 'f';
  printf("%s\n", tmp);
  free(tmp);
}