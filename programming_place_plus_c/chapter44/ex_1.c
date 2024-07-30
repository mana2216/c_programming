#include <stdio.h>

int main(void) {
  if (remove("test.txt") == 0) {
    puts("成功");
  } else {
    puts("失敗");
  }
}