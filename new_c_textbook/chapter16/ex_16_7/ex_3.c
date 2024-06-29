#include <stdio.h>

struct bill {
  int food;
  int drink;
};

void create_bill(struct bill *before, struct bill *p1, struct bill *p2);

int main(void) {
  struct bill before = {480, 200};
  struct bill p1, p2;
  create_bill(&before, &p1, &p2);
  printf("p1 : drink = %d, food = %d\n", p1.drink, p1.food);
  printf("p2 : drink = %d, food = %d\n", p2.drink, p2.food);
}

void create_bill(struct bill *before, struct bill *p1, struct bill *p2) {
  p1->food = before->food / 2;
  p2->food = before->food / 2;
  p1->drink = before->drink;
  p2->drink = 0;
}