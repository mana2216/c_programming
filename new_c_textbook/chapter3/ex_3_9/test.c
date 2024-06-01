#include <stdio.h>

int main(void)
{
  int c;
  int nchar;

  nchar = 0;
  while ((c = getchar()) != EOF)
  {
    if (c == '\n') {
      printf("%d\n", nchar);
      nchar = 0;
    } else {
      nchar++;
    }
  }
  return 0;
}