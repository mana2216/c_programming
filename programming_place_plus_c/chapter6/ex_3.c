#include <stdio.h>

int main(void) {
  printf("please input seconds >> ");
  char buf[80];
  fgets(buf, sizeof(buf), stdin);

  int seconds;
  sscanf(buf, "%d", &seconds);
  int hour = seconds / 60 / 60 % 24;
  int minute = seconds / 60 % 60;
  seconds = seconds % 60;
  printf("%d時%d分%d秒\n", hour, minute, seconds);
  return 0;
}