#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  FILE *fp = fopen("test.txt", "r");
  if (fp == NULL) {
    fputs("fpのファイルオープンに失敗しました\n", stderr);
    exit(EXIT_FAILURE);
  }

  FILE *wp = fopen("output.txt", "w");
  if (wp == NULL) {
    fputs("wpのファイルオープンに失敗しました\n", stderr);
    exit(EXIT_FAILURE);
  }

  for (;;) {
    int c = fgetc(fp);
    if (c == EOF) {
      if (feof(fp)) {
        break;
      } else if (ferror(fp)) {
        fputs("エラーが発生しました\n", stderr);
        exit(EXIT_FAILURE);
      } else {
        // 有効な文字
      }
    }
    if (fputc(c, wp) == EOF) {
      fputs("ファイルへの書き込みに失敗しました\n", stderr);
      exit(EXIT_FAILURE);
    }
  }

  if (fclose(fp) == EOF) {
    fputs("ファイルクローズに失敗しました\n", stderr);
    exit(EXIT_FAILURE);
  }

  if (fclose(wp) == EOF) {
    fputs("ファイルクローズに失敗しました\n", stderr);
    exit(EXIT_FAILURE);
  }
}