#include <stdio.h>
#include <stdlib.h>

int main(void) {
  FILE *fp = fopen("tmp.bin", "w");
  if (fp == NULL) {
    fputs("ファイルオープンに失敗しました\n", stderr);
    exit(EXIT_FAILURE);
  }

  char buf[] = "表";
  if (fputs(buf, fp) == EOF) {
    fputs("ファイルへの書き込みに失敗しました\n", stderr);
    exit(EXIT_FAILURE);
  }

  if (fclose(fp) == EOF) {
    fputs("ファイルクローズに失敗しました\n", stderr);
    exit(EXIT_FAILURE);
  }
}