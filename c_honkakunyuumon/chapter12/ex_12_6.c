#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool CopyFileData(const char *filepath_src, const char *filepath_dest);

int main(void)
{
  const char *fileName_src = "data.txt";
  const char *fileName_dest = "test.txt";
  bool flag = CopyFileData(fileName_src, fileName_dest);
  if (flag) {
    puts("ファイルのコピーに成功しました");
  } else {
    puts("ファイルのコピーに失敗しました");
  }
}

bool CopyFileData(const char *filepath_src, const char *filepath_dest)
{
  FILE *src = fopen(filepath_src, "r");
  if (src == NULL)
  {
    fputs("ファイルのオープンに失敗しました\n", stderr);
    exit(EXIT_FAILURE);
  }

  FILE *dest = fopen(filepath_dest, "w");
  if (dest == NULL) {
    fputs("ファイルのオープンに失敗しました\n", stderr);
    exit(EXIT_FAILURE);
  }

  for (;;) {
    char buf[80];
    if (fgets(buf, sizeof(buf), src) == NULL) {
      if (feof(src)) {
        break;
      } else {
        fputs("ファイルの読み取りに失敗しました\n", stderr);
        return false;
      }
    }

    fputs(buf, dest);
  }

  if (fclose(src) == EOF) {
    fputs("ファイルのクローズに失敗しました\n", stderr);
    exit(EXIT_FAILURE);
  }

  if (fclose(dest) == EOF) {
    fputs("ファイルのクローズに失敗しました\n", stderr);
    exit(EXIT_FAILURE);
  }

  return true;
}