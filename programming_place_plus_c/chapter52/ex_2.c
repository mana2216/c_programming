#include <stdio.h>
#include <stdarg.h>

void my_printf(const char *format, ...);

int main(void) {
  my_printf("%d%d%d", 1, 2, 3);
}

void my_printf(const char *format, ...) {
  va_list args;
  va_start(args, format);
  const char *p = format;
  while (*p != '\0') {
    if (*p == '%') {
      p++;
      switch (*p)
      {
      case 'd':
        printf("%d\n", va_arg(args, int));
        break;
      case 'f':
        printf("%lf\n", va_arg(args, double));
        break;
      case 'c':
        printf("%c\n", va_arg(args, char));
        break;
      case 's':
        printf("%s\n", va_arg(args, char *));
        break;
      case '%':
        printf("%%\n");
        break;

      default:
        printf("想定外の記号です。\n");
        break;
      }
    } else {
      printf("%c", *p);
    }
    p++;
  }
  va_end(args);
}