#include <stdio.h>

int main(void)
{
  // sign = (x > 0) ? 1 : ((x == 0) ? 0 : -1);
  int x = -9;
  int tmp = 0;
  if (x > 0) {
    tmp = 1;
  } else {
    if (x == 0) {
      tmp = 0;
    } else {
      tmp = -1;
    }
  }

  printf("tmp = %d\n", tmp);
  return 0;
}