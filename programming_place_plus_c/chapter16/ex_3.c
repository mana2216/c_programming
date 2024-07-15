#include <stdio.h>

int get_input_integer(void);

int main(void) {
  do {
    int value = get_input_integer();
    if (value % 5 == 0) {
      printf("5の倍数です\n");
      break;
    }
  } while (1);
}

int get_input_integer(void) {
  printf("please input integer >> ");
  char buf[40];
  fgets(buf, sizeof(buf), stdin);
  int value;
  sscanf(buf, "%d", &value);
  return value;
}