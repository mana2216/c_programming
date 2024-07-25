#include <stdio.h>
#include <stddef.h>

struct Data_tag1 {
  char a;
  int b;
  char c[20];
  double d;
  short e;
};

struct Data_tag2 {
  double d;
  int b;
  short e;
  char c[20];
  char a;
};

int main(void) {
  printf("%lu\n", offsetof(struct Data_tag1, a));
  printf("%lu\n", offsetof(struct Data_tag1, b));
  printf("%lu\n", offsetof(struct Data_tag1, c));
  printf("%lu\n", offsetof(struct Data_tag1, d));
  printf("%lu\n", offsetof(struct Data_tag1, e));

  printf("%lu\n", offsetof(struct Data_tag2, d));
  printf("%lu\n", offsetof(struct Data_tag2, b));
  printf("%lu\n", offsetof(struct Data_tag2, e));
  printf("%lu\n", offsetof(struct Data_tag2, c));
  printf("%lu\n", offsetof(struct Data_tag2, a));
}