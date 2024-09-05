#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int val;
  printf("%s", "Please input integer >> ");
  scanf("%d", &val);
  while (val > 0) {
    int x = rand();
    printf("%d\n", x);
    val--;
  }
  
  return 0;
}