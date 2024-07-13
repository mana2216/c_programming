#include <stdio.h>

int main(void) {
  int total = 0;
  for (int i = 0; i < 5; i++) {
    printf("please input integer >> ");
    char buf[40];
    fgets(buf, sizeof(buf), stdin);
    int num;
    sscanf(buf, "%d", &num);

    total += num;
    int avg = total / (i + 1);

    printf("合計: %d\n", total);
    printf("平均: %d\n", avg);
  }
  return 0;
}