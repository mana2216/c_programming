#include <stdio.h>

struct person {
  char name[40];
  int date_of_birth;
};

int main(void) {
  struct person x = {"exoe", 20240626};
  struct person y = x;
  printf("%s : %d\n", y.name, y.date_of_birth);
  return 0;
}