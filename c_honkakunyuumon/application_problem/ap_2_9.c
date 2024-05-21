#include <stdio.h>
#include <math.h>

void ShowFloatBits(float value);

int main(void)
{
  float value = 0.5;
  ShowFloatBits(value);
}

void ShowFloatBits(float value)
{
  unsigned int uvalue = *((unsigned int *)&value);
  for (int i = 0; i < 32; i++) {
    if ((uvalue & (1 << 31)) > 0) {
      printf("1");
    } else {
      printf("0");
    }
    uvalue = uvalue << 1;
  }
  printf("\n");
}