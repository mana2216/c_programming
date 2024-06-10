#include <stdio.h>

int main(void) {
  int multiplication_table[9][9];
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      multiplication_table[i][j] = (i + 1) * (j + 1);
    }
  }

  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      if (j != 8) {
        printf("%2d ", multiplication_table[i][j]);
      } else {
        printf("%2d\n", multiplication_table[i][j]);
      }
    }
  }

  return 0;
}