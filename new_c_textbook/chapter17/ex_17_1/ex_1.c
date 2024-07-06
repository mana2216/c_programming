#include <stdio.h>

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
} s;