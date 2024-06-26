#include <stdio.h>
#include "person.h"

int main(void) {
  struct person x = {"exoe", 20240626};
  struct person y = x;
  printf("%s : %d\n", y.name, y.date_of_birth);
  return 0;
}