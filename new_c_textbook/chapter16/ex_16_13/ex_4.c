#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct vector {
  int dim;
  double x[];
};

void display_vector(struct vector *p) {
  int i;


  printf("(");
  for (i = 0; i < p->dim; i++) {
    printf(" %g", p->x[i]);
  }
  printf(")\n");
}

int main(void) {
  union {
    char data[sizeof(struct vector) + sizeof(double) * 3];
    struct vector a;
  } u;
  struct vector *bp;

  u.a.dim = 3;
  u.a.x[0] = 1;
  u.a.x[1] = 1.5;
  u.a.x[2] = 2;

  display_vector(&u.a);

  bp = malloc(sizeof(struct vector) + sizeof(double) * 3);
  if (bp == NULL) {
    fputs("メモリの確保に失敗しました\n", stderr);
    exit(EXIT_FAILURE);
  }
  bp->dim = u.a.dim;
  for (int i = 0; i < bp->dim; i++) {
    bp->x[i] = u.a.x[i];
  }

  display_vector(bp);

  free(bp);
  return 0;
}