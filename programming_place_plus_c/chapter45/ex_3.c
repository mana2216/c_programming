#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

int main(int argc, char *argv[]) {
  if (argc < 2) {
    fputs("コマンドライン引数がたりません\n", stderr);
    exit(EXIT_FAILURE);
  }

  FILE *fp = fopen(argv[1], "r");
  if (fp == NULL) {
    fputs("ファイルオープンに失敗しました\n", stderr);
    exit(EXIT_FAILURE);
  }

  for (;;) {
    char buf[80];
    if (fgets(buf, sizeof(buf), fp) == NULL) {
      if (feof(fp)) {
        break;
      } else {
        fputs("ファイルの読み取りに失敗しました。\n", stderr);
        exit(EXIT_FAILURE);
      }
    }

    char *p = strstr(buf, "//");
    if (p != NULL) {
      continue;
    }
    p = strchr(buf, '\n');
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