#include <stdio.h>

int main(void) {
  char str1[] = "hello";
  char str2[] = "world";
  char* const v[] = {str1, str2};
  v[0] = "fix";
  v[0][0] = 'd';
}