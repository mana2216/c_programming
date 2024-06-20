#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  if (argc < 2) {
    fputs("コマンドライン引数が足りません\n", stderr);
    exit(EXIT_FAILURE);
  }

  int sum = 0;
  for (int i = 1; i < argc; i++) {
    sum += atoi(argv[i]);
  }
  printf("合計 : %d\n", sum);
  return 0;
}