#include <stdio.h>

int main(void)
{
  int n, i;
  int divided = 0;

  printf("number(>1)?");
  scanf("%d", &n);

  i = n - 1;
  divided = 0;
  while (i >= 2) {
    /*if divided*/
    if (n % i == 0) {
      divided = 1;
    }
    i--;
  }

  if (divided) {
    printf("%d is a composite\n", n);
  } else {
    printf("%d is a prime\n", n);
  }
  return 0;
}