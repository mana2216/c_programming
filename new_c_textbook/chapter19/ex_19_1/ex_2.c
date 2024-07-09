#include <stdio.h>
#include <string.h>

char *strcat_bad(char *s, char *t) {
  char u[strlen(s)+strlen(t)+1];
  char *p = u;

  while (*s) {
    *p++ = *s++;
  }

  while (*t) {
    *p++ = *t++;
  }
  *p = '\0';
  return u;
}