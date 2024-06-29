#include <stdio.h>

struct tmp {
  unsigned b1 : 4;
  unsigned b2 : 4;
  unsigned b3 : 4;
  unsigned b4 : 4;
  unsigned : 0;
  unsigned b5 : 4;
  unsigned b6 : 4;
  unsigned b7 : 4;
  unsigned b8 : 4;
};

void print_bit(const void *, size_t);

int main(void) {
  struct tmp t = {1, 2, 3, 4, 5, 6, 7, 8};
  print_bit(&t, sizeof(struct tmp));
}

void print_bit(const void *t, size_t size) {
  const unsigned char *p = t;
  for (size_t i = 0; i < size; i++) {
    printf("%02x ", p[i]);
  }
  printf("\n");
}