#include <stdio.h>

int main(void) {
  int m, f, b;
  scanf("%d %d %d", &m, &f, &b);
  int ans = 0;
  if (m >= b) {
    ans = 0;
  } else if (m + f >= b) {
    ans = b - m;
  } else {
    printf("%s\n", "NA");
    return 0;
  }

  printf("%d\n", ans);
  return 0;
}