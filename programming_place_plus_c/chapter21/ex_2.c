#include <stdio.h>

int main(void) {
  short snum = 1000;
  short num1 = snum + snum;
  short num2 = (int)snum + (int)snum;
  short num3 = (int)(snum + snum);

  printf("%hd\n", num1); // num1 = 2000
  printf("%hd\n", num2); // num2 = 2000
  printf("%hd\n", num3); // num3 = 2000
}