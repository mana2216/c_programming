#include <stdio.h>

int main(void)
{
  enum color { red, orange, yellow = -1, blue, violet};
  printf("red = %d\n", red);
  printf("orange = %d\n", orange);
  printf("yellow = %d\n", yellow);
  printf("blue = %d\n", blue);
  printf("violet = %d\n", violet);

  return 0;
}