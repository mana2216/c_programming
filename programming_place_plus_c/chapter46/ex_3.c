#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  char buf[] = "あいうBABえお";
  char index[8];

  if (setlocale(LC_ALL, "") == NULL) {
    fputs("ロケールの設定に失敗しました\n", stderr);
    exit(EXIT_FAILURE);
  }

  int i = 0;
  int char_count = 0;
  while (buf[i] != '\0') {
    int res = mblen(&buf[i], MB_CUR_MAX);
    if (res < 0) {
      fputs("不正な文字を含んでいます\n", stderr);
      exit(EXIT_FAILURE);
    }

    index[char_count] = res;
    i += res;
    char_count++;
  }

  int j = i;
  int count = char_count - 1;
  while (count >= 0) {
    j -= index[count];
    printf("%.*s", index[count], &buf[j]);
    count--;
  }
  printf("\n");
}