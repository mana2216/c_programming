#include <stdio.h>
#include <assert.h>

void my_strcpy(char *, const char *);

int main(void) {
  char s1[20];
  char s2[] = "abcde";
  my_strcpy(s1, s2);
  printf("%s\n", s1);
}

void my_strcpy(char *s1, const char *s2) {
  assert(s1 != NULL);
  assert(s2 != NULL);
  char *p1 = s1;
  const char *p2 = s2;
  while (*p2 != '\0') {
    *p1 = *p2;
    p1++;
    p2++;
  }
  *p1 = '\0';
}