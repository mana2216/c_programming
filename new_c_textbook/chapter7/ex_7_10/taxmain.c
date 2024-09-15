#include <stdio.h>

extern double rate;
int tax(int);

double rate;

int main(void) {
  int price, pay;

  rate = 8.0;
  printf("%s", "price ? ");
  scanf("%d", &price);
  pay = price + tax(price);
  printf("You pay %d\n", pay);
  
  return 0;
}