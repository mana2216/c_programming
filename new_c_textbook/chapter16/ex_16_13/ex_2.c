#include <stdio.h>
#include <stdlib.h>

struct vector {
  int dim;
  double x[];
};

int main(void) {
  union {
    char data[sizeof(struct vector) + sizeof(double) * 3];
    struct vector a;
  } u;
}