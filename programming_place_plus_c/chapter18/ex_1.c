#include <stdio.h>

unsigned int get_input_hexadecimal(void);

int main(void) {
  unsigned int value = get_input_hexadecimal();
  printf("%#o\n", value);
}

unsigned int get_input_hexadecimal(void) {
  printf("please input hexdecimal >> ");
  char buf[40];
  fgets(buf, sizeof(buf), stdin);
  unsigned int value;
  sscanf(buf, "%x", &value);
  return value;
}