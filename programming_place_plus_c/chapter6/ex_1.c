#include <stdio.h>

int main(void) {
  printf("please input two number >> ");
  char buf[80];
  fgets(buf, sizeof(buf), stdin);

  int num1;
  int num2;
  sscanf(buf, "%d %d", &num1, &num2);

  printf("num1 + num2 = %d\n", num1 + num2);
  return 0;
}