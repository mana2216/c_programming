#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct NameList_tag {
  size_t name_length;
  char *name;
  int age;
} NameList;

int main(void) {
  FILE *fp = fopen("test.bin", "wb");
  if (fp == NULL) {
    fputs("ファイルオープンに失敗しました\n", stderr);
    exit(EXIT_FAILURE);
  }

  static const NameList name_list = {
    4, "John", 29
  };

  if (fwrite(&(name_list.name_length), sizeof(size_t), 1, fp) < 1) {
    fputs("バイナリファイルへの書き込みに失敗しました\n", stderr);
    exit(EXIT_FAILURE);
  }

  if (fwrite(name_list.name, 5, 1, fp) < 1) {
    fputs("バイナリファイルへの書き込みに失敗しました\n", stderr);
    exit(EXIT_FAILURE);
  }

  if (fwrite(&name_list.age, sizeof(int), 1, fp) < 1) {
    fputs("バイナリファイルへの書き込みに失敗しました\n", stderr);
    exit(EXIT_FAILURE);
  }

  if (fclose(fp) == EOF) {
    fputs("ファイルクローズに失敗しました\n", stderr);
    exit(EXIT_FAILURE);
  }

  FILE *fp2 = fopen("test.bin", "rb");
  if (fp2 == NULL) {
    fputs("ファイルオープンに失敗しました\n", stderr);
    exit(EXIT_FAILURE);
  }

  size_t nameSize;
  if (fread(&nameSize, sizeof(size_t), 1, fp2) < 1) {
    fputs("バイナリファイルの読み込みに失敗しました(nameSize)\n", stderr);
    exit(EXIT_FAILURE);
  }

  char name[5];
  if (fread(name, sizeof(char), 5, fp2) < 5) {
    fputs("バイナリファイルの読み込みに失敗しました(name)\n", stderr);
    exit(EXIT_FAILURE);
  }

  int age;
  if (fread(&age, sizeof(age), 1, fp2) < 1) {
    fputs("バイナリファイルの読み込みに失敗しました(age)\n", stderr);
    exit(EXIT_FAILURE);
  }

  printf("nameSize = %zu, name = %s, age = %d\n", nameSize, name, age);

  if (fclose(fp2) == EOF) {
    fputs("ファイルクローズに失敗しました\n", stderr);
    exit(EXIT_FAILURE);
  }
}