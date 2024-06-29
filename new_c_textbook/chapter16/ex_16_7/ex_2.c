#include <stdio.h>

struct bill {
  int food;
  int drink;
};

void discount_ptr(struct bill *before, struct bill *after, double discount_rate);

int main(void) {
  struct bill before = {480, 200};
  struct bill after;
  discount_val(&before, &after, 15);
  printf("drink = %d\n", after.drink);
}

void discount_val(struct bill *before, struct bill *after, double discount_rate) {
  after->drink = before->drink * (100 - discount_rate) / 100;
  return;
}