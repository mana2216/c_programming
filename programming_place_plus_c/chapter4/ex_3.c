#include <stdio.h>

int main(void) {
  printf("please input string >> ");
  char buf[80];
  fgets(buf, sizeof(buf), stdin);
  printf("%s", buf);
  printf("please input string >> ");
  fgets(buf, sizeof(buf), stdin);
  printf("%s", buf);
  return 0;
}