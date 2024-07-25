#include <stdio.h>
#include <stdlib.h>

void init_gird(char **grid, int row, int col);
void print_grid(char **grid, int row, int col);
void free_grid(char **grid, int row, int col);

int main(void) {
  int row = 9;
  int col = 9;
  char **grid = malloc(sizeof(char*)*row);
  for (int i = 0; i < row; i++) {
    grid[i] = malloc(sizeof(char)*col);
  }
  init_gird(grid, row, col);
  print_grid(grid, row, col);
}

void init_gird(char **grid, int row, int col) {
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      grid[i][j] = '-';
    }
  }
}

void print_grid(char **grid, int row, int col) {
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      printf("%c ", grid[i][j]);
    }
    printf("\n");
  }
}

void free_grid(char **grid, int row, int col) {
  for (int i = 0; i < row; i++) {
    free(grid[i]);
  }
  free(grid);
}