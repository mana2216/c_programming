#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  printf("ファイル名を入力してください >> ");
  char filename[80];
  fgets(filename, sizeof(filename), stdin);
  filename[strlen(filename)-1] = '\0';

  FILE *fp = fopen(filename, "w");
  if (fp == NULL) {
    fputs("ファイルオープンに失敗しました\n", stderr);
    exit(EXIT_FAILURE);
  }

  if (fputs("Hello, World", fp) == EOF) {
    fputs("ファイルの読み込みに失敗しました\n", stderr);
    exit(EXIT_FAILURE);
  }

  if (fclose(fp) == EOF) {
    fputs("ファイルクローズに失敗しました\n", stderr);
    exit(EXIT_FAILURE);
  }
}