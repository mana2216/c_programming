#include <stdio.h>

int main(void) {
  char buf[80];
  int value;
  printf("please input integer >> ");
  fgets(buf, sizeof(buf), stdin);
  sscanf(buf, "%d", &value);
  int count = 0;
  int ans = 0;

  while (value > 0) {
    int tmp = (value & 1);
    for (int i = 0; i < count; i++) {
      tmp *= 10;
    }
    ans += tmp;
    value >>= 1;
    count++;
  }

  printf("0b%d\n", ans);
}