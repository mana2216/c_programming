#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <limits.h>
#include <wchar.h>

int main(void) {
  wchar_t w1 = L'大';
  char m1[] = "大";

  if (setlocale(LC_ALL, "") == NULL) {
    fputs("ロケールに失敗しました\n", stderr);
    exit(EXIT_FAILURE);
  }

  wchar_t w2;
  if (mbtowc(&w2, m1, MB_CUR_MAX) < 0) {
    fputs("マルチバイト文字の変換に失敗しました\n", stderr);
    exit(EXIT_FAILURE);
  }

  printf("%d\n", wcscmp(&w1, &w2));

  if (wcscmp(&w1, &w2) == 0) {
    puts("同じ文字です");
  } else {
    puts("異なる文字です");
  }
}