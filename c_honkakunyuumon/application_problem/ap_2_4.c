#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void mystrcpy(char *dst, const char *src);

int main(void)
{
  char str1[] = "abcde";
  char str2[16];
  mystrcpy(str2, str1);
  printf("str2 = %s\n", str2);
}

void mystrcpy(char *dst, const char *src)
{
  int i = 0;
  while (src[i] != '\0') {
    dst[i] = src[i];
    i++;
  }
  dst[i] = '\0';
}