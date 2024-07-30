#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <limits.h>

int main(int argc, char *argv[]) {
  printf("%d", argc);
  if (argc < 4) {
    fputs("コマンドライン引数を正確に指定してください\n", stderr);
    exit(EXIT_FAILURE);
  }

  long int sum = 0;
  char *p1;
  errno = 0;
  long int integer1 = strtol(argv[1], &p1, 10);
  if (errno == ERANGE || *p1 != '\0') {
    fprintf(stderr, "コマンドラインを数字に変換できません1 (%s)\n", argv[1]);
    exit(EXIT_FAILURE);
  }

  sum += integer1;

  char *p2;
  errno = 0;
  long int integer2 = strtol(argv[3], &p2, 10);
  if (errno == ERANGE || *p2 != '\0') {
    fprintf(stderr, "コマンドライン引数を数字に変換できません2 (%s)\n", argv[3]);
    exit(EXIT_FAILURE);
  }

  if (argv[2][0] == '*') {
    sum *= integer2;
  } else {
    fprintf(stderr, "無効な演算子です (%s)\n", argv[2]);
    exit(EXIT_FAILURE);
  }

  printf("%ld\n", sum);
}