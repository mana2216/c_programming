#include <stdio.h>
#include <string.h>

int main(void) {
  char s[] = "Hello";
  char *p = "Hello";
  char t[10], u[10];
  char *q, *r;

  strcpy(t, s);
  strcpy(u, p);
  q = s;
  r = t;
  return 0;
}