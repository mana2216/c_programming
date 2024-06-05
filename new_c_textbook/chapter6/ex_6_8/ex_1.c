#include <stdio.h>

int main(void)
{
  int n;

  printf("How many times?");
  scanf("%d", &n);
  do
  {
    if (n == 0) {
      printf("input number is %d\n", n);
      break;
    }
    printf("Hello!\n");
    n--;
  } while (n > 0);
  return 0;
}