#include <stdio.h>

int main(void) {
  int val;

  printf("%s", "please input integer >> ");
  scanf("%d", &val);

  int i = val;
  while (i >= 0) {
    printf("%d\n", i);
    i--;
  }
  
  return 0;
}