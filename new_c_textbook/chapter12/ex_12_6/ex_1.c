#include <stdio.h>

int main(void) {
  char buf[80];
  while (fgets(buf, sizeof(buf), stdin)) {
    int index = 0;
    while (buf[index] != '\0') {
      index++;
    }
    int size = index;
    for (int i = 0; i < size; i++) {
      if (i >= size - 1 - i) {
        break;
      }
      char tmp = buf[i];
      buf[i] = buf[size - 1 - i];
      buf[size - 1 - i] = tmp;
    }
    fputs(buf, stdout);
    printf("\n");
  }
  return 0;
}