#include <stdio.h>
#include <stdbool.h>

bool IsPowerOfTwo(int value);

int main(void)
{
  int value;
  printf("value >> ");
  scanf("%d", &value);

  if (IsPowerOfTwo(value)) {
    printf("%d is power of two\n", value);
  } else {
    printf("%d is not power of two\n", value);
  }
}

bool IsPowerOfTwo(int value)
{
  if (value == 1) {
    return true;
  }

  do {
    if (value % 2 == 1) {
      return false;
    }
    value /= 2;
  } while(value > 1);

  return true;
}