#include <stdio.h>
#include <string.h>

union data2 {
  int i;
  double d;
  char s[17];
};

int main(void) {
  union data2 y;
  printf("&y = %p\n", &y);
  printf("&y.i = %p\n", &y.i);
  printf("&y.d = %p\n", &y.d);
  printf("&y.s = %p\n", &y.s);
}