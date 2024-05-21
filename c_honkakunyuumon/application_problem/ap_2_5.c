#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

bool createMagicSquare(void);

int main(void)
{
  srand((unsigned)time(NULL));
  while (!createMagicSquare());
}

bool createMagicSquare(void)
{
  int magicSquare[3][3] = {
    {0, 0, 0},
    {0, 0, 0},
    {0, 0, 0}
  };

  for (int i = 1; i <= 9; i++)
  {
    int x;
    int y;
    do
    {
      x = rand() % 3;
      y = rand() % 3;
    } while(magicSquare[y][x] != 0);
    magicSquare[y][x] = i;
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d", magicSquare[i][j]);
    }
    printf("\n");
  }

  printf("----------------------\n");

  int sum[8];
  for (int i = 0; i < 3; i++) {
    sum[i] = magicSquare[i][0] + magicSquare[i][1] + magicSquare[i][2];
  }

  for (int i = 0; i < 3; i++) {
    sum[i+3] = magicSquare[0][i] + magicSquare[1][i] + magicSquare[2][i];
  }

  sum[6] = magicSquare[0][2] + magicSquare[1][1] + magicSquare[2][0];
  sum[7] = magicSquare[0][0] + magicSquare[1][1] + magicSquare[2][2];

  for (int i = 1; i < 8; i++) {
    if (sum[0] != sum[i]) {
      return false;
    }
  }

  printf("Found!\n");
  return true;
}