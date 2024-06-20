#include <stdio.h>
#include <stdarg.h>

#define DEBUG(...) debug(__FILE__,__func__,__VA_ARGS__)

void debug(const char *file, const char *func, char *fmt, ...) {
  va_list ap;
  printf("%s :: %s:", file, func);
  va_start(ap, fmt);
  vprintf(fmt, ap);
  va_end(ap);
  return;
}

int add(int x, int y) {
  DEBUG("args %d, %d\n", x, y);
  return x + y;
}

int sub(int x, int y) {
  DEBUG("args %d, %d\n", x, y);
  return x + y;
}