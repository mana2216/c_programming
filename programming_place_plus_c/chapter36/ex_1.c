#include <stdio.h>

int main(void) {
  char str[81];
  char* p_str = str;
  char** pp_str = &p_str;

  puts("80文字以内の文字列を入力してください。");
  fgets(*pp_str, sizeof(str), stdin);
  printf("%s\n", str);
}