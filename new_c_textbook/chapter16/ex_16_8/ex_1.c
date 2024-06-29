#include <stdio.h>

struct bill {
  int food, drink;
  unsigned guests : 3;
  unsigned table : 4;
  unsigned iscc : 1;
  unsigned table_manager : 2;
};

void showbill(struct bill *);

int main(void) {
  struct bill b1 = {700, 150, 2-1, 10, 0, 3-1};
  struct bill b2, b3;
  unsigned int tmp;

  b2.food = 3000;
  b2.drink = 1000;
  b2.guests = 4 - 1;
  b2.table = 5;
  b2.iscc = 1;
  b2.table_manager = 2-1;

  printf("food? ");
  scanf("%d", &b3.food);
  printf("drink? ");
  scanf("%d", &b3.drink);

  printf("#guest? ");
  scanf("%u", &tmp);
  b3.guests = tmp - 1;
  printf("table? ");
  scanf("%u", &tmp);
  b3.table = tmp;
  printf("card[0/1]? ");
  scanf("%u", &tmp);
  b3.iscc = tmp;
  printf("table_manager? ");
  scanf("%u", &tmp);
  b3.table_manager = tmp - 1;

  showbill(&b1);
  showbill(&b2);
  showbill(&b3);

  return 0;
}

void showbill(struct bill *p) {
  printf("\nfood %d\n"
        "drink %d\n"
        "#guest %d\n"
        "table %d\n"
        "card %s\n"
        "table_manager %d\n",
        p->food, p->drink, p->guests+1, p->table,
        p->iscc ? "yes" : "no",
        p->table_manager+1);
}