#include <stdio.h>

int get_input_integer(void);

int main(void) {
  int value = get_input_integer();
  while (value > 0) {
    printf("*");
    --value;
  }
  printf("\n");
}

int get_input_integer(void) {
  printf("please input integer >> ");
  char buf[40];
  fgets(buf, sizeof(buf), stdin);
  int value;
  sscanf(buf, "%d", &value);
  return value;
}