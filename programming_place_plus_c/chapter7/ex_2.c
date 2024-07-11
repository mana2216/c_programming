#include <stdio.h>

int main(void) {
  char buf[80];
  printf("please input number >> ");
  fgets(buf, sizeof(buf), stdin);

  int num;
  sscanf(buf, "%d", &num);
  num *= 2;
  printf("%d\n", num);
  num *= 2;
  printf("%d\n", num);
  num *= 2;
  printf("%d\n", num);
}