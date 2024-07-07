#include <stdio.h>

int main(void) {
  const char* const v[] = {"hello", "world"};
  v[0] = "fix";
  printf("%s\n", v[0]);
}