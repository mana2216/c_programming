#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand((unsigned int)time(NULL));
  char hiragana[] = "aiueo";
  int index = rand() % (sizeof(hiragana) - 1);
  printf("%c\n", hiragana[index]);
}