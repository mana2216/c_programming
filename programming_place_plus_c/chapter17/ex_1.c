#include <stdio.h>

int main(void) {
  int value = 0;
  do {
    puts("Please enter the integer. ");
    char input_string[32];
    fgets(input_string, sizeof(input_string), stdin);
    sscanf(input_string, "%d", &value);

    if (value > 0) {
      printf("%d is positive number. \n", value);
    } else if (value < 0) {
      printf("%d is negative number. \n", value);
    } else {
      printf("number is zero\n");
      break;
    }
  } while (1);
}