#include <stdio.h>

struct  bill
{
  int food, drink;
  unsigned int ginfo;
};

void showbill(struct bill *);

#define SET_GINFO(num_guests, table_num, is_card) ((num_guests & 0b111) << 5) | ((table_num & 0b1111) << 1) | (is_card & 0b1)
#define GET_NUM_GUESTS(ginfo) ((ginfo >> 5) & 0b111)
#define GET_TABLE_NUM(ginfo) ((ginfo >> 1) & 0b1111)
#define IS_CARD(ginfo) (ginfo & 0b1)

int main(void) {
  struct bill b;

  b.food = 3000;
  b.drink = 1000;
  b.ginfo = SET_GINFO(5, 10, 1);

  showbill(&b);
  return 0;
}

void showbill(struct bill *p) {
  printf("food %d\n"
        "drink %d\n"
        "guest %d\n"
        "table %d\n"
        "card %s\n",
        p->food, p->drink, GET_NUM_GUESTS(p->ginfo), GET_TABLE_NUM(p->ginfo),
        IS_CARD(p->ginfo) ? "yes" : "no");
  return;
}