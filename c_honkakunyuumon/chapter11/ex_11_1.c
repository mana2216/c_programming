#include <stdio.h>

int conversion_to_binary(int decimal);
void conversion_to_hexadecimal(int decimal);

int main(void)
{
  int decimal = 74;
  int binaryDigits = conversion_to_binary(decimal);

  printf("decimal = %d\n", decimal);
  printf("binaryDigits = 0b%d\n", binaryDigits);
  conversion_to_hexadecimal(decimal);
}

int conversion_to_binary(int decimal)
{
  int binary = 0;
  int base = 1;
  while (decimal > 0) {
    binary = binary + (decimal % 2) * base;
    decimal /= 2;
    base *= 10;
  }

  return binary;
}

void conversion_to_hexadecimal(int decimal)
{
  char henkan[] = "0123456789ABCDEF";
  char ans[40];
  int i = 0;
  while (decimal > 0) {
    ans[i] = henkan[decimal % 16];
    decimal /= 16;
    i++;
  }

  printf("hexadecial = 0x");
  for (int j = i; j >= 0; j--) {
    printf("%c", ans[j]);
  }
  printf("\n");
}
