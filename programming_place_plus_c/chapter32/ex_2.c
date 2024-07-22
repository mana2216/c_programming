#include <stdio.h>
#include <string.h>

int main(void) {
  char str1[] = "abcd";
  char *str2 = "abcd";

  printf("%zu\n", sizeof(str1));
  printf("%zu\n", strlen(str1));
  printf("%zu\n", sizeof(str2));
  printf("%zu\n", strlen(str2));
}