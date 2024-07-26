#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *filename_extention(char *);

int main(void) {
  printf("ファイルパスを入力してください >> ");
  char path[FILENAME_MAX];
  fgets(path, sizeof(path), stdin);
  path[strlen(path)-1] = '\0';

  char *p = filename_extention(path);
  printf("%s\n", p);
}

char *filename_extention(char *path) {
  char *p = strchr(path, '.');
  if (p == NULL) {
    fputs("拡張子が正しく認識できません\n", stderr);
    exit(EXIT_FAILURE);
  }
  return p;
}