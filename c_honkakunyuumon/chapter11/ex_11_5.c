#include <stdio.h>
#include <math.h>

int main(void)
{
  unsigned char binaryDigits = 0b10001001;
  unsigned char decimal = 0;
  for (int i = 0; i < 8; i++) {
    if ((1 << i) & binaryDigits) {
      decimal += pow(2, i);
    }
  }

  printf("2進数 : 0b10001001 => 10進数 : %d\n", decimal);
}