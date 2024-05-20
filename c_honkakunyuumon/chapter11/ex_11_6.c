#include <stdio.h>
#include <math.h>

int main(void)
{
  char binaryDigits = 0b10001001;
  int deciaml = 0;
  for (int i = 0; i < 8 - 1; i++) {
    if (binaryDigits & (1 << i)) {
      deciaml += pow(2, i);
    }
  }

  deciaml -= (1 << 7);
  printf("8ビットの符号付き整数の場合\n");
  printf("2進数 : 0b10001001 => 10進数 : %d\n", deciaml);
}