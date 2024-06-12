#include <stdio.h>
#include <stdarg.h>

void printss(char *str, ...);

int main(void) {
  printss("Hello", NULL);
  printss(NULL);
  printss("C", "programming", "language", NULL);
  return 0;
}

void printss(char *str, ...) {
  if (str == NULL) {
    printf("\n");
    return;
  } else {
    printf("%s ", str);
  }
  va_list ap;
  va_start(ap, str);
  char *buf;
  while ((buf = va_arg(ap, char *)) != NULL) {
    printf("%s ", buf);
  }
  va_end(ap);
  printf("\n");
}