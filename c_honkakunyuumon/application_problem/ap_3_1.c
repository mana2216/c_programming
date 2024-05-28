#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
  char *fileName = "tmp.txt";
  FILE *fp = fopen(fileName, "r");
  if (fp == NULL) {
    fputs("ファイルのオープンに失敗しました\n", stderr);
    exit(EXIT_FAILURE);
  }

  int alphabetCount[26] = {};
  int charCount = 0;
  for (;;) {
    int c = fgetc(fp);
    if (c == EOF) {
      if (feof(fp)) {
        break;
      } else if (ferror(fp)) {
        fputs("ファイルの読み込みに失敗しました\n", stderr);
        exit(EXIT_FAILURE);
      } else {
        // EOFと同じ値を持った有効な文字
      }
    }

    if (isalpha(c)) {
      int alphabetUpper = toupper(c);
      int index = alphabetUpper - 'A';
      alphabetCount[index] += 1;
      charCount++;
    }
  }

  for (int i = 0; i < 26; i++) {
    char alphabet = 'A' + i;
    double count = alphabetCount[i];
    double proportion = count / charCount * 100;
    printf("%c : %2f回, %.3lf%%\n", alphabet, count, proportion);
  }

  if (fclose(fp) == EOF) {
    fputs("ファイルのクローズに失敗しました\n", stderr);
  }
}