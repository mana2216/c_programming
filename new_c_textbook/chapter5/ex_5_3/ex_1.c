#include <stdio.h>
#include <stdbool.h>

int main(void) {
  int i = 4;
  bool flag = false;

  if (i < 10 && !flag) {
    puts("真");
  } else {
    puts("偽");
  }
  
  return 0;
}