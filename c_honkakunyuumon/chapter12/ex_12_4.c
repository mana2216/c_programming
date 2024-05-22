#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  char *fileName = "data.txt";
  FILE *fp = fopen(fileName, "r");
  if (fp == NULL) {
    fputs("ファイルのオープンに失敗しました\n", stderr);
    exit(EXIT_FAILURE);
  }

  int index = 1;
  for (;;) {
    char buf[254];
    if (fgets(buf, sizeof(buf), fp) == NULL) {
      if (feof(fp)) {
        break;
      } else {
        fputs("ファイルの読み取りに失敗しました\n", stderr);
        exit(EXIT_FAILURE);
      }
    }

    char *p = strchr(buf, '\n');
    if (p != NULL) {
      *p = '\0';
    }

    printf("「%d: %s」、", index, buf);
  }
  
  printf("\n");

  if (fclose(fp) == EOF) {
    fputs("ファイルのクローズに失敗しました\n", stderr);
    exit(EXIT_FAILURE);
  }
}