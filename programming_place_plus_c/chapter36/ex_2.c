#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int row = 9;
  int col = 9;
  int **grid = calloc(row, sizeof(int*));
  for (int i = 0; i < row; i++) {
    grid[i] = calloc(col, sizeof(int));
  }

  for (int i = 1; i < 10; i++) {
    for (int j = 1; j < 10; j++) {
      grid[i-1][j-1] = i * j;
    }
  }

  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      printf("%2d ", grid[i][j]);
    }
    printf("\n");
  }

  for (int i = 0; i < row; i++) {
    free(grid[i]);
  }
  free(grid);
}