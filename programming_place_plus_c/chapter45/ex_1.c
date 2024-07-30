#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(int argc, char *argv[]) {
  long int sum = 0;
  for (int i = 1; i < argc; i++) {
    char *p;
    errno = 0;
    long int num = strtol(argv[i], &p, 10);
    if (errno == ERANGE || argv[0] == p) {
      fprintf(stderr, "コマンドライン引数が数字に変換できません(%s)\n", argv[i]);
      exit(EXIT_FAILURE);
    }
    sum += num;
  }
  printf("%ld\n", sum);
}