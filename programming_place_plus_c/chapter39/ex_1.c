#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char path[80] = "/workspaces/c_programming/programming_place_plus_c/chapter39/test.txt";
  FILE *fp = fopen(path, "r");
  if (fp == NULL) {
    fputs("ファイルオープンに失敗しました。\n", stderr);
    exit(EXIT_FAILURE);
  }
  char buf[80];
  if (fgets(buf, sizeof(buf), fp) == NULL) {
    fputs("ファイルの読み込みに失敗しました\n", stderr);
    exit(EXIT_FAILURE);
  }
  printf("%s\n", buf);

  if (fclose(fp) == EOF) {
    fputs("ファイルクローズに失敗しました\n", stderr);
    exit(EXIT_FAILURE);
  }
}