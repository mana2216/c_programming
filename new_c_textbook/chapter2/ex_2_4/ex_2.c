#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand((unsigned)time(NULL));
  int count;
  printf("How many ?");
  scanf("%d", &count);
  while (count > 0) {
    int x = rand();
    printf("%d\n", x);
    count--;
  }
  return 0;
}