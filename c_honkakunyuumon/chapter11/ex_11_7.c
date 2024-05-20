#include <stdio.h>
#include <math.h>

int main(void)
{
  unsigned int fpn = 0b01000000010010010000111111011011;
  double decimal = 1.0;
  int index = 1;

  for (int i = 23 - 1; i >= 0; i--) {
    if (fpn & (1 << i)) {
      decimal += (double)pow(2, -index);
    }
    index++;
  }
  // printf("decimal = %lf\n", decimal);

  int num = 0;
  index = 0;
  for (int i = 23; i < 32; i++) {
    if (fpn & (1 << i)) {
      num += pow(2, index);
    }
    index++;
  }
  num -= 127;
  // printf("num = %d\n", num);

  int sign = 1;
  if (fpn & (1 << 31)) {
    sign *= -1;
  }

  double result = sign * pow(2, num) * decimal;
  printf("fpn = %lf\n", result);

  puts("別解-----------------------");
  float another_ans = *((float *)&fpn);
  printf("another ans = %f\n", another_ans);
}