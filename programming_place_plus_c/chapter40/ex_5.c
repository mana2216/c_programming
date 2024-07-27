#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
  FILE *fp_src = fopen("test.txt", "r");
  if (fp_src == NULL) {
    fputs("ファイルオープンに失敗しました\n", stderr);
    exit(EXIT_FAILURE);
  }

  FILE *fp_dest = fopen("output.txt", "w");
  if (fp_dest == NULL) {
    fputs("ファイルオープンに失敗しました\n", stderr);
    exit(EXIT_FAILURE);
  }

  for (;;) {
    char buf[80];
    if (fgets(buf, sizeof(buf), fp_src) == NULL) {
      if (feof(fp_src)) {
        break;
      } else {
        fputs("エラーが発生しました\n", stderr);
        exit(EXIT_FAILURE);
      }
    }

    char *p = strchr(buf, '\t');
    if (p != NULL) {
      *p = ' ';
    }

    if (fputs(buf, fp_dest) == EOF) {
      fputs("ファイルへの書き込みに失敗しました\n", stderr);
      exit(EXIT_FAILURE);
    }
  }

  if (fclose(fp_src) == EOF) {
    fputs("ファイルクローズに失敗しました\n", stderr);
    exit(EXIT_FAILURE);
  }

  if (fclose(fp_dest) == EOF) {
    fputs("ファイルクローズに失敗しました\n", stderr);
    exit(EXIT_FAILURE);
  }
}