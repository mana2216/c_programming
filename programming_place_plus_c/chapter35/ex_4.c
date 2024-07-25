#include <stdio.h>
#include <stdlib.h>

#define LIMIT_SIZE 1000

int main(void) {
  int capacity = 5;
  int size = 0;
  int index = 0;
  int *array = malloc(sizeof(int)*size);
  if (array == NULL) {
    fputs("メモリの動的確保に失敗しました\n", stderr);
    exit(EXIT_FAILURE);
  }

  while (1) {
    char buf[80];
    int value;
    printf("please input integer(終了したい場合は負の整数を入力してください) >> ");
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%d", &value);

    if (value < 0) {
      break;
    }

    size++;

    if (size > LIMIT_SIZE) {
      printf("最大上限の1000件に到達しました。\n");
      break;
    }

    if (size >= capacity) {
      capacity *= 2;
      int *tmp = realloc(array, sizeof(int)*capacity);
      if (tmp == NULL) {
        fputs("メモリの動的確保に失敗しました\n", stderr);
        exit(EXIT_FAILURE);
      }
      array = tmp;
      tmp = NULL;
    }
    array[size - 1] = value;
    index++;
  }

  int *tmp = realloc(array, sizeof(int)*index);
  if (tmp == NULL) {
    fputs("メモリの動的確保に失敗しました\n", stderr);
    exit(EXIT_FAILURE);
  }
  array = tmp;
  tmp = NULL;

  for (int i = 0; i < index; i++) {
    printf("array[%d] => %d\n", i, array[i]);
  }

  free(array);
}