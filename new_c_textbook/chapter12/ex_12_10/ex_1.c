#include <stdio.h>
#include <string.h>

int main(void) {
  char fruits[][10] = {"apple", "banana", "mango", "pineapple"};
  int price[] = {100, 50, 200, 2500};

  printf("price >> ");
  char price_buf[20];
  fgets(price_buf, sizeof(price_buf), stdin);
  int p;
  sscanf(price_buf, "%d", &p);
  for (int i = 0; i < 4; i++) {
    if (price[i] < p) {
      printf("%s\n", fruits[i]);
    }
  }
}