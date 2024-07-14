#include <stdio.h>

int get_input_integer(void);

int main(void) {
  int value1 = get_input_integer();
  int value2 = get_input_integer();
  int bigger_num = value1 > value2 ? value1 : value2;
  printf("%d\n", bigger_num);
}

int get_input_integer(void) {
  printf("Please input integer >> ");
  char buf[40];
  fgets(buf, sizeof(buf), stdin);
  int value;
  sscanf(buf, "%d", &value);
  return value;
}