#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  FILE *fp = fopen("test.txt", "a+");
  if (fp == NULL) {
    fputs("ファイルオープンに失敗しました\n", stderr);
    exit(EXIT_FAILURE);
  }

  if (fputs("postscript\n", fp) == EOF) {
    fputs("ファイルへの書き込みに失敗しました\n", stderr);
    exit(EXIT_FAILURE);
  }

  if (fseek(fp, 0L, SEEK_SET) != 0L) {
    fputs("ファイルシークに失敗しました\n", stderr);
    exit(EXIT_FAILURE);
  }

  for (;;) {
    char buf[80];
    if (fgets(buf, sizeof(buf), fp) == NULL) {
      if (feof(fp)) {
        break;
      } else {
        fputs("ファイルの読み込みに失敗しました\n", stderr);
        exit(EXIT_FAILURE);
      }
    }

    char *p = strchr(buf, '\n');
    if (p != NULL) {
      *p = '\0';
    }
    puts(buf);
  }

  if (fclose(fp) == EOF) {
    fputs("ファイルクローズに失敗しました\n", stderr);
    exit(EXIT_FAILURE);
  }
}