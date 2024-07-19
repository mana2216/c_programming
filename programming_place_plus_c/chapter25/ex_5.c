#include <stdio.h>

#define ARRAY_SIZE 5

int main(void) {
  int values1[ARRAY_SIZE] = {-17, 8, 29, -5, 13};
  int values2[ARRAY_SIZE] = {64, -5, 17, -22, -38};

  for (int i = 0; i < ARRAY_SIZE; i++) {
    for (int j = 0; j < ARRAY_SIZE; j++) {
      if (values1[i] == values2[j]) {
        puts("配列の値に重複があります。");
        return 0;
      }
    }
  }
  puts("配列の値に重複はありません。");
}