#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int row = 3;
  int col = 3;
  int **grid = calloc(row, sizeof(int*));
  for (int i = 0; i < row; i++) {
    grid[i] = calloc(col, sizeof(int));
  }

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      printf("%p ", &grid[i][j]);
    }
    printf("\n");
  }

  for (int i = 0; i < row; i++) {
    free(grid[i]);
  }
  free(grid);
}