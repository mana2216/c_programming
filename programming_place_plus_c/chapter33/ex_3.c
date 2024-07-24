#include <stdio.h>
#include <assert.h>

int my_strcmp(const char *s1, const char *s2);

int main(void) {
  char s1[] = "abcd";
  char s2[] = "abcd";
  if (!my_strcmp(s1, s2)) {
    puts("同じ文字列です");
  } else {
    puts("違う文字列です。");
  }
}

int my_strcmp(const char *s1, const char *s2) {
  assert(s1 != NULL);
  assert(s2 != NULL);
  while (*s1 == *s2) {
    if (*s1 == '\0') {
      return 0;
    }
    s1++;
    s2++;
  }
  return (*s1 < *s2) ? -1 : 1;
}