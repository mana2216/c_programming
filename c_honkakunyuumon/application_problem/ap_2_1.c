#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int StartsWith(const char *str, const char *prefix);

int main(void)
{
  char *str = "thumbnail";
  char *prefix = "th";
  int flag = StartsWith(str, prefix);
  if (flag) {
    printf("文字列strは文字列prefixから始まっている\n");
  } else {
    printf("文字列strは文字列prefixから始まっていない\n");
  }
}

int StartsWith(const char *str, const char *prefix)
{
  int size = (int)strlen(prefix);
  bool flag = true;

  for (int i = 0; i < size; i++) {
    if (str[i] != prefix[i]) {
      flag = false;
      break;
    }
  }

  if (flag) {
    return 1;
  }

  return 0;
}