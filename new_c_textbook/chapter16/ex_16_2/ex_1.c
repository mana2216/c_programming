#include <stdio.h>

struct student {
  int age;
  char name[35];
  short int date_of_birth;
};

int main(void) {
  size_t struct_size = sizeof(struct student);
  size_t member_size = sizeof(int) + sizeof(char [35]) + sizeof(short int);
  if (struct_size == member_size) {
    printf("same\n");
  } else {
    size_t sub = struct_size - member_size;
    printf("different : %zu\n", sub);
  }
  return 0;
}