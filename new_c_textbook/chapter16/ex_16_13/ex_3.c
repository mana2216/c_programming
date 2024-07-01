#include <stdio.h>
#include <stdlib.h>

struct vector {
  int dim;
  double x[];
};

int main(void) {
  struct vector *bp = malloc(sizeof(struct vector) + sizeof(double)*3);
}