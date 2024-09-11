#include <stdio.h>

int main(void) {
  int sum = 0;

  do {
    printf("%s", "Please input number >> ");
    int val;
    scanf("%d", &val);
    if (val < 0) {
      printf("%s\n", "input positive number");
      continue;
    }

    if (val == 0) {
      break;
    }

    sum += val;
  } while (1);

  printf("total = %d\n", sum);
  
  return 0;
}