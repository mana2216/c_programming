#include <stdio.h>

#define ALL_COMMENTS_OUT
#define THREE_COMMENTS_OUT

int main(void) {
#ifndef ALL_COMMENTS_OUT
  puts("1");
  puts("2");
#ifndef THREE_COMMENTS_OUT
  puts("3");
#endif
  puts("4");
#endif
}