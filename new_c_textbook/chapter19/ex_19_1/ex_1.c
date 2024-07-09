#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse_words(char *);

void reverse_words(char *str) {
  char *work = (char *)malloc((strlen(str)+1) * sizeof(char));
  char *s = str, *p;
  for (p = work + strlen(s); *s; s++, *--p = ' ') {
    char *w = s, *endp;

    while (*w != ' ' && *w != '\0') w++;
    endp = w;
    while (s < w) {
      *--p = *--w;
      s = endp;
    }
  }
  strcpy(str, work);
  free(work);
}

int main(void) {
  char s[] = "Programming Language C";

  reverse_words(s);
  printf("%s\n", s);
  return 0;
}