#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  FILE *fp_src = fopen("tmp.txt", "r");
  if (fp_src == NULL) {
    fputs("ファイルオープンに失敗しました\n", stderr);
    exit(EXIT_FAILURE);
  }

  FILE *fp_dest = fopen("test.bin", "wb+");
  if (fp_dest == NULL) {
    fputs("ファイルクローズに失敗しました\n", stderr);
    exit(EXIT_FAILURE);
  }

  for (;;) {
    char c = fgetc(fp_src);
    if (c == EOF) {
      if (feof(fp_src)) {
        break;
      } else if (ferror(fp_src)) {
        fputs("エラーが発生しました\n", stderr);
        exit(EXIT_FAILURE);
      } else {
        // 成功
      }
    }

    if (fwrite(&c, sizeof(char), 1, fp_dest) < 1) {
      fputs("バイナリファイルへの書き込みに失敗しました(fp_dest)\n", stderr);
      exit(EXIT_FAILURE);
    }
  }

  if (fseek(fp_dest, 0L, SEEK_SET) != 0) {
    fputs("ファイルシークに失敗しました\n", stderr);
    exit(EXIT_FAILURE);
  }

  for (;;) {
    char buf[16];
    int bytesReade = fread(buf, sizeof(char), sizeof(buf), fp_dest);
    if (bytesReade < sizeof(buf)) {
      if (feof(fp_dest)) {
        break;
      } else {
        fputs("バイナリファイルの読み込みに失敗しました\n", stderr);
        exit(EXIT_FAILURE);
      }
    }
    buf[bytesReade] = '\0';
    printf("%zu", strlen(buf));
    puts(buf);
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