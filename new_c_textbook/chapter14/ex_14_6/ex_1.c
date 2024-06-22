#include <stdio.h>

int main(void) {
  double a[24] = {0};
  double (*p)[3][4] = (double (*)[3][4])a;
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 4; k++) {
        printf("p[%d][%d][%d] = %lf\n", i, j, k, p[i][j][k]);
      }
    }
  }
}