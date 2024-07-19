#include <stdio.h>

#define ARRAY_SIZE 5

int main(void) {
  int values[ARRAY_SIZE] = {13, 27, 75, 27, 48};
  for (int i = 0; i < ARRAY_SIZE; i++) {
    for (int j = i+1; j < ARRAY_SIZE; j++) {
      if (values[i] == values[j]) {
        printf("配列に重複があります。\n");
        return 1;
      }
    }
  }
  puts("配列には重複がありませんでした。");
  return 0;
}