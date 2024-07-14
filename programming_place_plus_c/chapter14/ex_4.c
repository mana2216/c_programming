#include <stdio.h>

int get_input_integer(void) {
  printf("Please input integer >> ");
  char buf[40];
  fgets(buf, sizeof(buf), stdin);
  int value;
  sscanf(buf, "%d", &value);
  return value;
}

int main(void) {
  int score = get_input_integer();

  if (score == 100) {
    printf("***\n");
  } else if (score >= 70) {
    printf("**\n");
  } else if (score >= 40) {
    printf("*\n");
  } else {
    printf("\n");
  }
}