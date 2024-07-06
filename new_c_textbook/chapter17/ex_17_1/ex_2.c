#include <stdio.h>
#include <string.h>

enum sliptype {bill, receipt};
typedef enum sliptype ST;

typedef struct slip {
  ST type;
  struct {
    int year, month, day;
  } date;
  union {
    struct {
      int food, drink;
      int table;
    } bill;
    struct {
      char customer[100];
      int price;
    } receipt;
  } u;
} SLIP;

void showslip(SLIP *p) {
  printf("Date: %4d-%02d-%02d\n",
    p->date.year, p->date.month, p->date.day);
  switch (p->type) {
    case bill:
      printf(" Food: %d\n", p->u.bill.food);
      printf(" Drink: %d\n", p->u.bill.drink);
      printf(" Table: %d\n", p->u.bill.table);
      break;
    case receipt:
      printf(" To: %s\n", p->u.receipt.customer);
      printf(" Price: %d\n", p->u.receipt.price);
      break;
    default:
      printf(" Error: unknown slip type %d\n", p->type);
      break;
  }
  return;
}

int main(void) {
  SLIP s1 = {bill, {2012, 10, 1}, {{600, 100, 5}}};
  SLIP s2;

  showslip(&s1);

  s2.type = receipt;
  s2.date.year = 2012;
  s2.date.month = 10;
  s2.date.day = 2;
  strcpy(s2.u.receipt.customer, "Taro Suzuki");
  s2.u.receipt.price = 5000;

  showslip(&s2);
  return 0;
}