#include <stdio.h>

extern double rate;

double rate;

int tax(int);

int main(void)
{
  int price, pay;

  rate = 8.0;
  printf("price? ");
  scanf("%d", &price);
  pay = price + tax(price);
  printf("You pay %d\n", pay);
  return 0;
}