#include <stdio.h>

int main(void) {
  for (;;) {
    int n;
    printf("%s", "n? ");
    scanf("%d", &n);

    if (n <= 0) {
      break;
    }

    int sum = 0;
    for (int i = 1; i <= n; i++) {
      sum += i;
    }

    printf("%d\n", sum);
  }
  
  return 0;
}