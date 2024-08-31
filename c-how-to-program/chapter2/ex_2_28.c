#include <stdio.h>

int main(void) {
  printf("%s", "Please input your age in year >> ");
  int age;
  scanf("%d", &age);
  int max_heart_rate = 220 - age;
  printf("あなたの最大心拍数は、%d です\n", max_heart_rate);

  printf("%lf ~ %lf までの範囲に収めましょう\n", (double)max_heart_rate / 2, (double)max_heart_rate * 0.8);
  
  return 0;
}