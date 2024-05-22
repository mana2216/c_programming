#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  const char *file_name = "data.txt";
  FILE *fp = fopen(file_name, "w");
  if (fp == NULL) {
    fputs("ファイルのオープンに失敗しました。\n", stderr);
    exit(EXIT_FAILURE);
  }

  srand((unsigned)time(NULL));
  for (int i = 0; i < 10; i++) {
    int random_num = rand() % 101;
    fprintf(fp, "%d\n", random_num);
  }

  if (fclose(fp) == EOF) {
    fputs("ファイルのクローズに失敗しました\n", stderr);
    exit(EXIT_FAILURE);
  }
}