#include <stdio.h>

int get_input_AD(void);

int main(void) {
  int year = get_input_AD();
  if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
    printf("%d年はうるう年です。\n", year);
  } else {
    printf("%d年はうるう年ではありません。\n", year);
  }
}

int get_input_AD(void) {
  printf("please input AD >> ");
  char buf[40];
  fgets(buf, sizeof(buf), stdin);
  int value;
  sscanf(buf, "%d", &value);
  return value;
}