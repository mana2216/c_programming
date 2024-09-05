#include <stdio.h>

int main(void) {
  int value;

  printf("%s", "input integer >> ");
  scanf("%d", &value);

  if (value > 0) {
    puts("OK");
  } else {
    puts("NG");
  }
  
  return 0;
}