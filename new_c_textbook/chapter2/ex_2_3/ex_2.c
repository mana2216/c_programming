#include <stdio.h>

int main(void) {
  int small_num, large_num;

  printf("%s", "Please input small integer >> ");
  scanf("%d", &small_num);
  printf("%s", "Please input large integer >> ");
  scanf("%d", &large_num);

  int i = small_num;
  while (i <= large_num) {
    printf("%d\n", i);
    i++;
  }
  
  return 0;
}