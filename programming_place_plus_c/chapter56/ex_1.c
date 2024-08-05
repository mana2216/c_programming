#include <stdio.h>

struct Bit_tag {
  int a : 1;
};

int main(void) {
  printf("%zu\n", sizeof(struct Bit_tag));
}