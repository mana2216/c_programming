#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
  const char *fileName = "data.txt";
  FILE *fp = fopen(fileName, "r");
  if (fp == NULL) {
    fputs("ファイルのオープンに失敗しました\n", stderr);
    exit(EXIT_FAILURE);
  }

  for (;;) {
    char buf[40];

    if (fgets(buf, sizeof(buf), fp) == NULL) {
      if (feof(fp)) {
        break;
      } else {
        fputs("ファイルの読み取りに失敗しました\n", stderr);
        exit(EXIT_FAILURE);
      }
    }

    char *p = strchr(buf, '\n');
    if (p != NULL)
    {
      *p = '\0';
    }

    char *end_ptr;
    errno = 0;
    long value = strtol(buf, &end_ptr, 10);
    if (errno == ERANGE) {
      fputs("結果が表現できない\n", stderr);
      exit(EXIT_FAILURE);
    } else if (buf == end_ptr) {
      fputs("変換できません\n", stderr);
      exit(EXIT_FAILURE);
    }    
    printf("%ld\n", value*2);
  }

  if (fclose(fp) == EOF) {
    fputs("ファイルのクローズに失敗しました。\n", stderr);
    exit(EXIT_FAILURE);
  }
}