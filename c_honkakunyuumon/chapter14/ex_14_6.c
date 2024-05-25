#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ShowIntArray(int *p, int count);

int main(void)
{
  srand((unsigned)time(NULL));
  int array[10];
  for (int i = 0; i < 10; i++) {
    array[i] = rand() % 10 + 1;
  }
  ShowIntArray(array, 10);
}

void ShowIntArray(int *p, int count)
{
  for (int i = 0; i < count; i++) {
    printf("p[i] = %d\n", p[i]);
  }
}