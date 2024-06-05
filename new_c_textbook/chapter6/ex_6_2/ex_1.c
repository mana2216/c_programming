#include <stdio.h>

int main(void)
{
  int num;
  printf("num >> ");
  scanf("%d", &num);
  if (num > 0) {
    puts("1");
  } else if (num < 0) {
    puts("-1");
  } else {
    puts("0");
  }

  return 0;
}