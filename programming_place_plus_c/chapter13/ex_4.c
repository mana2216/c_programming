#include <stdio.h>

int main(void) {
  char buf[] = "I am a programmer.";
  int size = (int)sizeof(buf) / (int)sizeof(buf[0]);
  for (int i = 0; i < size; i++) {
    if (buf[i] == '\0') {
      break;
    }
    printf("%d文字目 : %c\n", i + 1, buf[i]);
  }
}