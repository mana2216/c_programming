#include <stdio.h>

int main(void) {
  int elapsed_time;
  scanf("%d", &elapsed_time);

  int hour = elapsed_time / 60 / 60;
  int minute = elapsed_time / 60 % 60;
  int second = elapsed_time % 60;

  printf("%d : %d : %d\n", hour, minute, second);
  
  return 0;
}