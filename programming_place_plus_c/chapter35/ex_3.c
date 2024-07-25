#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 5

int main(void) {
  size_t capacity = ARRAY_SIZE;
  int size = 0;
  int *array = (int*)malloc(sizeof(int)*capacity);
  if (array == NULL) {
    fputs("動的メモリの確保に失敗しました。\n", stderr);
    exit(EXIT_FAILURE);
  }

  while (1) {
    char buf[80];
    int value;
    printf("please input integer(終了したい場合は負の数を入力すること) >> ");
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%d\n", &value);

    if (value < 0) {
      break;
    }

    size++;

    if (size >= capacity) {
      capacity *= 2;
      int *tmp = realloc(array, sizeof(int)*capacity);
      if (tmp == NULL) {
        fputs("reallocに失敗しました。\n", stderr);
        exit(EXIT_FAILURE);
      }
      array = tmp;
      tmp = NULL;
    }

    array[size - 1] = value;
  }

  for (size_t i = 0; i < capacity; i++) {
    printf("%d\n", array[i]);
  }
  
  free(array);
}