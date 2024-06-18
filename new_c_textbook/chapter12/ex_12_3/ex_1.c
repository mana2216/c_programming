#include <stdio.h>

int main(void) {
  char buf[20];
  int size = (int)sizeof(buf) / (int)sizeof(buf[0]);
  int index = 0;
  printf("19文字いないで入力してください");
  for (int i = 0; i < size - 1; i++) {
    char c = getchar();
    if (c == '\n' || c == EOF) {
      break;
    }
    buf[i] = c;
    index++;
  }
  buf[index] = '\0';
  printf("%s\n", buf);
  return 0;
}