#include <stdio.h>

int main(void) {
  printf("please input integer(1 ~ 13) >> ");
  char buf[40];
  fgets(buf, sizeof(buf), stdin);
  int num;
  sscanf(buf, "%d", &num);

  switch (num) {
    case 1:
      puts("A");
      break;
    case 11:
      puts("J");
      break;
    case 12:
      puts("Q");
      break;
    case 13:
      puts("K");
      break;
    default:
      printf("%d\n", num);
      break;
  }
}