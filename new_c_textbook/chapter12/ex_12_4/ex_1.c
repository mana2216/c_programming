#include <stdio.h>

int main(void) {
  int c;
  int bit_count = 0;
  int word_count = 0;
  int line = 0;

  printf("終了したい場合はEOFを入力してください\n");
  while ((c = getchar()) != EOF) {
    if (c == '\n') {
      printf("\n");
      line++;
      word_count++;
      continue;
    }
    bit_count++;
    if (c == ' ') {
      word_count++;
    }
    printf("%c", c);
  }
  printf("%c", '\n');

  printf("バイト数は %d\n", bit_count);
  printf("語数は %d\n", word_count);
  printf("行数は %d\n", line);
  return 0;
}