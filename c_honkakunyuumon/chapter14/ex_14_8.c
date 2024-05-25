#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  srand((unsigned)time(NULL));
  int *p1 = (int *)malloc(sizeof(int) * 10);
  if (p1 == NULL) {
    fputs("Faile to malloc\n", stderr);
    exit(EXIT_FAILURE);
  }

  int count = 0;
  for (int i = 0; i < 10; i++) {
    p1[i] = rand() % 10;
    count++;
  }

  int *p2 = realloc(p1, sizeof(int) * 20);
  if (p2 == NULL) {
    fputs("Faile to realloc\n", stderr);
    free(p1);
    exit(EXIT_FAILURE);
  }

  p1 = p2;
  for (int i = count; i < 20; i++) {
    p1[i] = rand() % 10;
  }

  for (int i = 0; i < 20; i++) {
    printf("p1[%d] = %d\n", i, p1[i]);
  }

  free(p1);
}