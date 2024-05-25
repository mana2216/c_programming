#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  srand((unsigned)time(NULL));

  int *mp = (int *)malloc(sizeof(int) * 100);
  if (mp == NULL) {
    fputs("Faile to malloc().\n", stderr);
    exit(EXIT_FAILURE);
  }

  for (int i = 0; i < 100; i++) {
    mp[i] = rand() % 101;
  }

  for (int i = 0; i < 100; i++) {
    printf("%d\n", mp[i]);
  }

  free(mp);
}