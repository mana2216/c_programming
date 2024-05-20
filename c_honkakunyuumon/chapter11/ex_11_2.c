#include <stdio.h>
#include <math.h>

int conversion_to_decimal(int binary);
char *conversion_to_hexadecimal(int binary, char *ans);

int main(void)
{
  int binaryDigits = 0b10110011;
  int decimal = conversion_to_decimal(binaryDigits);
  char ans[40];
  char *hexadecimal = conversion_to_hexadecimal(binaryDigits, ans);
  printf("2進数 : 0b10110011\n");
  printf("10進数 : %d\n", decimal);
  int size = 2;
  printf("16進数 : 0x");
  for (int i = size - 1; i >= 0; i--) {
    printf("%c", hexadecimal[i]);
  }
  printf("\n");
}

int conversion_to_decimal(int binary)
{
  int decimal = 0;
  for (int i = 0; i < 8; i++) {
    if ((1 << i) & binary) {
      decimal += pow(2, i);
    }
  }
  return decimal;
}
char *conversion_to_hexadecimal(int binary, char *ans)
{
  char henkan[] = "0123456789ABCDEF";
  int index = 0;
  int tmp = 0;
  for (int i = 0; i < 4; i++) {
    if ((1 << i) & binary) {
      tmp += pow(2, i);
    }
  }
  ans[index] = henkan[tmp];
  index++;

  tmp = 0;
  for (int i = 4, j = 0; i < 8; i++, j++) {
    if ((1 << i) & binary) {
      tmp += pow(2, j);
    }
  }
  ans[index] = henkan[tmp];

  return ans;
}