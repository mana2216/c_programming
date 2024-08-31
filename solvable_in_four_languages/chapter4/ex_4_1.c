#include <stdio.h>
#include <stdbool.h>

int main(void) {
  int c1, c5, c10, c50, c100, c500;
  scanf("%d %d %d %d %d %d", &c1, &c5, &c10, &c50, &c100, &c500);
  bool flag = false;

  for(int i = 0; i <= c500; i++) {
    for (int j = 0; j <= c100; j++) {
      for (int k = 0; k <= c50; k++) {
        for (int l = 0; l <= c10; l++) {
          for (int m = 0; m <= c5; m++) {
            for (int n = 0; n <= c1; n++) {
              if ((i*500) + (j*100) + (k*50) + (l*10) + (m*5) + (n*1) >= 1000) {
                flag = true;
                goto loop_end;
              }
            }
          }
        }
      }
    }
  }

  puts("0");
  return 0;
loop_end:
  puts("1");
  return 0;
}