#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main(void)
{
  char str[256];
  printf("str >> ");
  fgets(str, sizeof(str), stdin);

  char *p = str;
  while (*p != '\n') {
    p++;
  }
  *p = '\0';

  char tmp[256];
  int index = 0;
  int i = 0;
  while (str[index] != '\0') {
    if (isalpha(str[index])) {
      tmp[i] = tolower(str[index]);
      i++;
    }
    index++;
  }
  tmp[i] = '\0';

  int size = (int)strlen(tmp);
  bool flag = true;
  
  for (int i = 0; i < size / 2; i++) {
    if (tmp[i] != tmp[size - 1 - i]) {
      flag = false;
      break;
    }
  }

  if (flag) {
    printf("str = [%s] は回文である\n", str);
  } else {
    printf("str = [%s] は回文ではない\n", str);
  }
}