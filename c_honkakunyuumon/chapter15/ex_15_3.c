#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int StringToInt(const char *str, int *errorIndex);

int main(void)
{
  const char *str = "12CDE";
  int Index = 0;
  int result = StringToInt(str, &Index);

  if (result == -10) {
    printf("%d文字目に数字以外の文字がありました\n", Index);
  } else {
    printf("数字は%dです\n", result);
  }
}

int StringToInt(const char *str, int *errorIndex)
{
  char *ptr;
  int num = (int)strtol(str, &ptr, 10);
  if (*ptr != '\0') {
    *errorIndex = (&(*ptr) - str) + 1;
    return -10;
  } else {
    *errorIndex = -1;
  }

  return num;


/*
  char *ptr = str;
  while (*ptr != '\0') {
    ptr++;
  }

  int size = ptr - str;

  int array[size];

  int count = 0;

  for (int i = 0; str[i] != '\0'; i++) {
    if (('A' <= str[i] && str[i] <= 'Z') || ('a' <= str[i] && str[i] <= 'z')) {
      array[i] = atoi(str[i]);
      count += 1;
    } else {
      fputs("数字以外の文字がありました\n", stderr);
      *errorIndex = count;
      break;
    }
  }
*/
}