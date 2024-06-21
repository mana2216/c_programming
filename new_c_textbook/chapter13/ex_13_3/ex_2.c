#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
  char buf[20];
  printf("数字を入力してください >> ");
  fgets(buf, sizeof(buf), stdin);
  char *p = NULL;
  long num = strtol(buf, &p, 10);
  printf("%ld\n", num);
  return 0;
}