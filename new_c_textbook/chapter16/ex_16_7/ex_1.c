#include <stdio.h>

struct bill {
  int food;
  int drink;
};

struct bill discount_val(struct bill before, double discount_rate);

int main(void) {
  struct bill before = {480, 200};
  struct bill after;
  after = discount_val(before, 15);
  printf("drink = %d\n", after.drink);
}

struct bill discount_val(struct bill before, double discount_rate) {
  before.drink = before.drink * (100 - discount_rate) / 100;
  return before;
}