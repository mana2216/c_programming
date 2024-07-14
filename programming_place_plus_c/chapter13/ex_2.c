#include <stdio.h>
#include <stdbool.h>

int main(void) {
  bool value = false;

  printf("%d\n", true);
  printf("%d\n", false);
  printf("%d\n", value == false);
  printf("%d\n", value != false);
  return 0;
}