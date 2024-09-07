#include <stdio.h>

enum color {
  red,
  orange,
  yellow = -1,
  green,
  blue,
  violet,
};

int main(void) {
  printf("%d\n", red);
  printf("%d\n", orange);
  printf("%d\n", yellow);
  printf("%d\n", green);
  printf("%d\n", blue);
  printf("%d\n", violet);
  
  return 0;
}