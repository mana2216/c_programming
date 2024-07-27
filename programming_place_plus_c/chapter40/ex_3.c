#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char path[FILENAME_MAX];
  printf("ファイルのパスを入力してください >> ");
  fgets(path, sizeof(path), stdin);
  char *p = strchr(path, '\n');
  if (p != NULL) {
    *p = '\0';
  }
  FILE *fp = fopen(path, "r");
  if (fp == NULL) {
    fputs("ファイルオープンに失敗しました\n", stderr);
    exit(EXIT_FAILURE);
  }

  char tmp[80];
  int line;
  printf("出力したいファイルの行をしていしてください >> ");
  fgets(tmp, sizeof(tmp), stdin);
  sscanf(tmp, "%d", &line);

  if (line <= 0) {
    fputs("入力した行数は存在しません\n", stderr);
    exit(EXIT_FAILURE);
  }

  int index = 1;

  for (;;) {
    char buf[80];
    if (fgets(buf, sizeof(buf), fp) == NULL) {
      if (feof(fp)) {
        printf("%d行目は存在しません\n", line);
        break;
      } else {
        fputs("エラーが発生しました\n", stderr);
        exit(EXIT_FAILURE);
      }
    }

    if (line == index) {
      char *p = strchr(buf, '\n');
      if (p != NULL) {
        *p = '\0';
      }
      puts(buf);
    }

    index++;
  }

  if (fclose(fp) == EOF) {
    fputs("ファイルクローズに失敗しました\n", stderr);
    exit(EXIT_FAILURE);
  }
}