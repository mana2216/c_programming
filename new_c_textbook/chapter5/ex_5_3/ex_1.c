#include <stdio.h>


int main(void)
{
  int i = 9;
  _Bool flag = 1;

  if (i < 10 && flag) {
    puts("真");
  } else {
    puts("偽");
  }
}