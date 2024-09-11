#include <stdio.h>

int main(void) {
  printf("%s", "Please input val >> ");
  int val;
  scanf("%d", &val);

  if (val > 0) {
    puts("1");
  } else if (val < 0) {
    puts("-1");
  } else {
    puts("0");
  }
  
  return 0;
}