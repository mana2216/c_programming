#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int bigger_num;
  int smaller_num;
  printf("bigger_num? ");
  scanf("%d", &bigger_num);
  printf("smaller_num?");
  scanf("%d", &smaller_num);

  if (bigger_num < smaller_num) {
    fputs("bigger が smaller よりも小さいです\n", stderr);
    exit(EXIT_FAILURE);
  }

  int num = smaller_num;

  while (num <= bigger_num) {
    printf("%d\n", num);
    num++;
  }
  return 0;
}