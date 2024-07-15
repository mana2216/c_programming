#include <stdio.h>

int get_input_integer(void);

int main(void) {
  while (1) {
    printf("5の倍数を入力してください。\n");
    int value = get_input_integer();
    if (value % 5 == 0) {
      printf("5の倍数です。\n");
      break;
    }
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