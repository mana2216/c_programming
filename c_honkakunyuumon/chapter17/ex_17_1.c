#include <stdio.h>

int main(void) {
  int sum = 0;
  int i = 1;
  START:
    if (i > 100) {
      goto END;
    }

    sum += i;
    i++;
    goto START;
  END:

  printf("1~100 までの総和は\"%d\"です\n", sum);
  return 0;
}