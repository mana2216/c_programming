#include <stdio.h>
#include <stdlib.h>

int main(void) {
  FILE *fp = fopen("test.txt", "w");
  if (fp == NULL) {
    fputs("ファイルオープンに失敗しました\n", stderr);
    exit(EXIT_FAILURE);
  }

  printf("なにかを入力してください >> ");
  char buf[80];
  fgets(buf, sizeof(buf), stdin);

  if (fputs(buf, fp) == EOF) {
    fputs("ファイルへの書き込みに失敗しました\n", stderr);
    exit(EXIT_FAILURE);
  }

  if (fclose(fp) == EOF) {
    fputs("ファイルクローズに失敗しました\n", stderr);
    exit(EXIT_FAILURE);
  }
}