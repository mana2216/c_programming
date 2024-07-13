#include <stdio.h>

int main(void) {
  int value = 3;

  switch (value + 1)
  {
  case 0:
    break;
  case 1:
    printf("*\n");
    break;
  case 1 + 1:
    printf("**\n");
    break;
  case 0:
    printf("\n");
    break;
}