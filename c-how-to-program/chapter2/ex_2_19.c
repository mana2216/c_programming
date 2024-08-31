#include <stdio.h>

int main(void) {
  printf("%s", "Enter three different integer: ");
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);

  int sum = a + b + c;
  printf("Sum is %d\n", sum);

  int avg = (a + b + c) / 3;
  printf("Average is %d\n", avg);

  int product = a * b * c;
  printf("Product is %d\n", product);

  int min_num = a;
  if (b < min_num && b < c) {
    min_num = b;
  } else if (c < min_num && c < b) {
    min_num = c;
  }

  printf("Smallest is %d\n", min_num);

  int max_num = a;
  if (max_num < b && c < b) {
    max_num = b;
  } else if (max_num < c && b < c) {
    max_num = c;
  }

  printf("Largest is %d\n", max_num);

  return 0;
}