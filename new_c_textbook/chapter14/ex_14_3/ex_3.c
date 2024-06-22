#include <stdio.h>

#define NELEMS(a) sizeof(a)/sizeof((a)[0])

int main(void) {
  int a[2][3][4] = {{{0}}};
  for (int i = 0; i < NELEMS(a); i++) {
    for (int j = 0; j < NELEMS(a[0]); j++) {
      for (int k = 0; k < NELEMS(a[0][0]); k++) {
        printf("a[%d][%d][%d] = %d\n", i, j, k, a[i][j][k]);
      }
    }
  }
}