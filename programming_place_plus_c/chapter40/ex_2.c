#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  printf("ファイルのパスを入力してください >> ");
  char path[FILENAME_MAX];
  fgets(path, sizeof(path), stdin);
  char *p = strchr(path, '\n');
  if (p != NULL) {
    *p = '\0';
  }
  printf("path = %s\n", path);
  FILE *fp = fopen(path, "r");
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
        fputs("エラーが発生しました\n", stderr);
        exit(EXIT_FAILURE);
      }
    }
    fputs(buf, stdout);
  }

  if (fclose(fp) == EOF) {
    fputs("ファイルクローズに失敗しました\n", stderr);
    exit(EXIT_FAILURE);
  }
}