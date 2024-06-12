#include <stdio.h>
#include <stdlib.h>

enum {
  N = 20,
};

int main(void) {
  int *p;
  int i;

  if ((p = malloc(sizeof(int)*N)) == NULL) {
    printf("cannot allocate memory\n");
    return 1;
  }

  p[0] = p[1] = 1;
  for (i = 2; i < N; i++) {
    p[i] = p[i-1]+p[i-2];
  }

  int size;

  while (1) {
    printf("0 ~ %d までの間の数値を入力してください\n", N);
    scanf("%d", &size);
    if (size < 1 || N < size) {
      printf("数字が範囲から外れています。再度入力してください。\n");
      continue;
    } else {
      break;
    }
  }

  for (i = 0; i < size; i++) {
    printf("%d", p[i]);
  }
  printf("\n");

  free(p);
  return 0;
}