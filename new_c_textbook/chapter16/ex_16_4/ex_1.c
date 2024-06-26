#include <stdio.h>
#include "person.h"

int main(void) {
  struct person p = (struct person){"ezoe", 20201101};
  printf("name : %s\n", p.name);
  printf("date_of_birth : %d\n", p.date_of_birth);
  return 0;
}