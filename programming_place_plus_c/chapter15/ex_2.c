#include <stdio.h>

int get_input_integer(void);

int main(void) {
  int value = get_input_integer();

  if ((value % 2 != 0) && (value >= 200) && (value < 500)) {
    puts("OK");
  }
}

int get_input_integer(void) {
  printf("please input integer >> ");
  char buf[40];
  fgets(buf, sizeof(buf), stdin);
  int value;
  sscanf(buf, "%d", &value);
  return value;
}