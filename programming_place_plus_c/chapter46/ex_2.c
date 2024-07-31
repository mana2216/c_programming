#include <stdio.h>
#include <string.h>

int main(void) {
  printf("%zu\n", sizeof('あ'));
  printf("%zu\n", sizeof("ABCＡＢＣ"));
  printf("%zu\n", strlen("ABCＡＢＣ"));
}