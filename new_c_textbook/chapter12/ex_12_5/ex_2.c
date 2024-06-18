#include <stdio.h>

int main(void) {
  char str[] = "Hello";
  int size = (int)sizeof(str) / (int)sizeof(str[0]);
  for (int i = 0; i < size - 2; i++) {
    if (i == size - 2 - i) {
      break;
    }
    char tmp = str[i];
    str[i] = str[size - 2 - i];
    str[size - 2 - i] = tmp;
  }
  printf("%s\n", str);
  return 0;
}