#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
  time_t t = time(NULL);
  struct tm* jst = localtime(&t);
  int current_year = jst->tm_year + 1900;

  printf("西暦を入力してください >> ");
  char buf[5];
  fgets(buf, sizeof(buf), stdin);
  int y_value;
  sscanf(buf, "%d", &y_value);
  if (y_value < 0 || current_year < y_value) {
    fputs("入力した数字は範囲外です\n", stderr);
    exit(EXIT_FAILURE);
  }

  printf("%d年から%d年までの年数は%d\n", y_value, current_year, current_year - y_value);
}