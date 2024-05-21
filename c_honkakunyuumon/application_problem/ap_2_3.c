#include <stdio.h>

int mystrlen(const char *str);

int main(void)
{
  const char *str = "str";
  int size = mystrlen(str);
  printf("size = %d\n", size);
}

int mystrlen(const char *str)
{
  int index = 0;
  while (*str != '\0') {
    index++;
    str++;
  }

  return index;
}