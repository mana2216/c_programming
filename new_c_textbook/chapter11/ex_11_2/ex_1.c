#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void put(int, int);
int get(int);
int size(void);

int *va = NULL;
int nva = 0;

int main(void) {
  int md;

  srand(time(0));

  for (int i = 0; i < 10; i++) {
    md = rand() % 100;
    put(md, md);
  }

  for (int i = 0; i < size(); i++) {
    printf("%3d ", get(i));
    if (i % 20 == 19) {
      printf("\n");
    }
  }
  printf("\n");

  free(va);

  return 0;
}

void put(int pos, int n) {
  int *p;

  if (pos >= nva) {
    pos = (pos + 9) / 10 * 10;
    if ((p = realloc(va,sizeof(int)*(pos+1))) == NULL) {
      printf("cannot extend array to %d\n", pos + 1);
      return;
    }
    va = p;

    for (int i = nva; i < pos; i++) {
      va[i] = 0;
    }
    nva = pos + 1;
  }
  va[pos] = n;
  return;
}

int get(int pos) {
  if (pos < 0 || pos >= nva) {
    printf("position %d out of range\n", pos);
    abort();
  }

  return va[pos];
}

int size(void) {
  return nva;
}