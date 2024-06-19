#include <stdio.h>
#include <string.h>

int different(char *, char *);

int main(void) {
  char buf1[80];
  char buf2[80];
  fgets(buf1, sizeof(buf1), stdin);
  fgets(buf2, sizeof(buf2), stdin);
  if (!different(buf1, buf2)) {
    printf("同じ文字です\n");
  } else {
    printf("違う文字です。\n");
  }
  return 0;
}

int different(char *s1, char *s2) {
  if (strlen(s1) != strlen(s2)) {
    return 1;
  }
  while (*s1 != '\0' && *s2 != '\0') {
    if (*s1 != *s2) {
      return 1;
    }
    s1++;
    s2++;
  }

  return 0;
}