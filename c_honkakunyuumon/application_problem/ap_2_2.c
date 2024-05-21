#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int EndsWith(const char *str, const char *suffix);

int main(void)
{
  const char *str = "mytest.jpg";
  const char *suffix = ".pg";
  int flag = EndsWith(str, suffix);
  if (flag) {
    puts("strはsuffixで終わる");
  } else {
    puts("strはsuffixで終わらない");
  }
}

int EndsWith(const char *str, const char *suffix)
{
  int suffix_size = (int)strlen(suffix);
  int str_size = (int)strlen(str);
  bool flag = true;
  for (int i = str_size - 1, j = suffix_size - 1; i > (str_size - suffix_size - 1); i--, j--) {
    if (str[i] != suffix[j]) {
      flag = false;
      break;
    }
  }

  if (flag) {
    return 1;
  }

  return 0;
}