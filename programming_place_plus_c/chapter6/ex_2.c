#include <stdio.h>

int main(void) {
  printf("please input number >> ");
  char buf[80];
  fgets(buf, sizeof(buf), stdin);

  int num;
  sscanf(buf, "%d", &num);
  printf("num ^ 3 = %d\n", num * num * num);
  return 0;
}