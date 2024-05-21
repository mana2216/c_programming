#include <stdio.h>
#include <stdarg.h>
#include <string.h>

void MyPrintf(const char *format, ...);

int main(void)
{
  MyPrintf("D:F:C:S", 123, 3.14158265, '@', "ABCDE");
}

void MyPrintf(const char *format, ...)
{
  va_list args;
  va_start(args, format);
  int size = (int)strlen(format);

  for (int i = 0; i < size; i++) {
    if (format[i] == 'D') {
      printf("%d", va_arg(args, int));
    } else if (format[i] == 'F') {
      printf("%f", va_arg(args, double));
    } else if (format[i] == 'C') {
      printf("%c", (char)va_arg(args, int));
    } else if (format[i] == 'S') {
      printf("%s", va_arg(args, char *));
    } else {
      printf("%c", format[i]);
    }
  }
  printf("\n");
  va_end(args);
}