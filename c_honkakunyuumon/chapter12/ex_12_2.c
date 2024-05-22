#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  const char *fileName = "data.txt";
  FILE *fp = fopen(fileName, "a");
  if (fp == NULL) {
    fputs("ファイルのオープンに失敗しました\n", stderr);
    exit(EXIT_FAILURE);
  }

  srand((unsigned)time(NULL));
  for (int i = 0; i < 10; i++) {
    int value = rand() % 101;
    fprintf(fp, "%d\n", value);
  }

  if (fclose(fp) == EOF) {
    fputs("ファイルのクローズに失敗しました\n", stderr);
    exit(EXIT_FAILURE);
  }
}