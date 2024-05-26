#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool CheckUpperString(const char *str, int *error);

int main(void)
{
  const char *str = NULL;
  int error_number;
  bool flag = CheckUpperString(str, &error_number);

  if (flag) {
    printf("str = \"%s\" は全て大文字のアルファベットです\n", str);
  } else {
    if (error_number == 10) {
      printf("strにNULLポインタが与えられています\n");
    } else if (error_number == 20) {
      printf("文字列strの長さが0です\n");
    } else if (error_number == 0) {
      printf("文字列strの中に小文字のアルファベットや数字が含まれています\n");
    }
  }
}

bool CheckUpperString(const char *str, int *error)
{
  if (str == NULL) {
    *error = 10;
    return false;
  }
  int size = (int)strlen(str);
  if (size < 1) {
    *error = 20;
    return false;
  }

  for (int i = 0; i < size; i++) {
    if ('A' > str[i] || str[i] > 'Z') {
      *error = 0;
      return false;
    }
  }

  return true;
}