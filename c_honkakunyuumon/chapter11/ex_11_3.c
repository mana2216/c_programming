#include <stdio.h>
#include <math.h>
#include <string.h>

int conversion_to_decimal(char hex[]);
int conversion_to_binary_digits(char hex[]);

int main(void)
{
  char hexadecimal[] = "3F";
  int decimal = conversion_to_decimal(hexadecimal);
  int binaryDigits = conversion_to_binary_digits(hexadecimal);
  printf("16進数 : 0x%s\n", hexadecimal);
  printf("2進数 : 0b%d\n", binaryDigits);
  printf("10進数 : %d\n", decimal);
}

int conversion_to_decimal(char hex[])
{
  int decimal = 0;
  char henkan[] = "0123456789ABCDEF";
  int size = (int)strlen(hex);
  int h_size = (int)strlen(henkan);
  int index = 0;
  for (int i = size - 1; i >= 0; i--) {
    for (int j = 0; j < h_size; j++) {
      if (hex[i] == henkan[j]) {
        decimal += pow(16, index) * j;
      }
    }
    index++;
  }

  return decimal;
}

int conversion_to_binary_digits(char hex[])
{
  int decimal = conversion_to_decimal(hex);

  int binaryDigits = 0;
  int base = 1;
  while (decimal > 0) {
    binaryDigits += (decimal % 2) * base;
    decimal /= 2;
    base *= 10;
  }

  return binaryDigits;
}