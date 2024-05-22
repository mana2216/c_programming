#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  char *fielName = "data.txt";
  FILE *fp = fopen(fielName, "rb");
  if (fp == NULL) {
    fputs("ファイルのオープンに失敗しました\n", stderr);
    exit(EXIT_FAILURE);
  }

  unsigned char buf[16];
  while (!feof(fp)) {
    int size = (int)fread(buf, 1, 16, fp);
    if (size <= 0) {
      break;
    }

    for (int i = 0; i < size; i++) {
      printf("0x%02x ", buf[i]);
    }
    printf("\n");
  }

  if (fclose(fp) == EOF) {
    fputs("ファイルのクローズに失敗しました\n", stderr);
    exit(EXIT_FAILURE);
  }
}

/*
int main(void)
{
  char *fileName = "data.txt";
  FILE *fp = fopen(fileName, "rb");
  if (fp == NULL) {
    fputs("ファイルのオープンに失敗しました\n", stderr);
    exit(EXIT_FAILURE);
  }

  for (;;) {
    char buf[80];
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

    int size = (int)strlen(buf);
    for (int i = 0; i < size; i++) {
      int s = 0x0 + (int)buf[i];
      printf("0x%d ", s);
    }

    printf("\n");
  }

  if (fclose(fp) == EOF) {
    fputs("ファイルのクローズに失敗しました\n", stderr);
    exit(EXIT_FAILURE);
  }
}
*/
