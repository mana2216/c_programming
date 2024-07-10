#include <stdio.h>

int main(void) {
  printf("please input string >> ");
  char buf1[80];
  fgets(buf1, sizeof(buf1), stdin);
  printf("please input string >> ");
  char buf2[80];
  fgets(buf2, sizeof(buf2), stdin);
  printf("%s%s", buf2, buf1);
  return 0;
}