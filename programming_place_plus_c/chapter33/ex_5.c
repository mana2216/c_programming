#include <stdio.h>
#include <assert.h>

char *my_strcat(char *s1, const char *s2);

int main(void) {
  char s1[80] = "abcd";
  char s2[] = "efgh";
  char *ans = my_strcat(s1, s2);
  printf("%s\n", ans);
}

char *my_strcat(char *s1, const char *s2) {
  assert(s1 != NULL);
  assert(s2 != NULL);
  char *ret = s1;
  while (*s1 != '\0') {
    s1++;
  }
  while (*s2 != '\0') {
    *s1 = *s2;
    s1++;
    s2++;
  }
  *s1 = '\0';
  return ret;
}