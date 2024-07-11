#include <stdio.h>

int main(void) {
  printf("please input char >> ");
  char s[20];
  fgets(s, sizeof(s), stdin);
  printf("%d\n", s[0]);
}