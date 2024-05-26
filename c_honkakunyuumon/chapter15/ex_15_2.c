#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <assert.h>

int main(void)
{
  int value;
  printf("value=? ");
  scanf("%d", &value);

  errno = 0;

  if (value < 0) {
    printf("Error!!\n");
    return 1;
  }

  printf("value = %d\n", value);
  return 0;
}