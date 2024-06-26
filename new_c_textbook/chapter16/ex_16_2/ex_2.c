#include <stdio.h>
#include <string.h>

struct student {
  int id;
  char name[35];
  short int age;
};

void print_bytes(const void *obj, size_t size);

int main(void) {
  struct student x = { 101, "Taro Suzuki", 18 }, y;
  char *p, *q;
  int n;

  y.id = x.id;
  strcpy(y.name, x.name);
  y.age = x.age;

  printf("Comparing member by member. ");
  if (x.id == y.id 
  && strcmp(x.name, y.name) == 0
  && x.age == y.age) {
    printf("same\n");
  } else {
    printf("different\n");
  }

  printf("Comparing byte by byte. ");
  p = (char *)&x;
  q = (char *)&y;
  n = sizeof(struct student);
  while (n-- > 0) {
    if (*p++ != *q++) {
      break;
    }
  }
  if (n >= 0) {
    printf("different\n");
  } else {
    printf("same\n");
  }

  printf("Comparing byte by byte (using memcmp): ");
  if (memcmp(&x, &y, sizeof(struct student)) == 0) {
    printf("same\n");
  } else {
    printf("different\n");
  }

  printf("print_bytes x \n");
  print_bytes(&x, sizeof(struct student));
  printf("print_bytes y \n");
  print_bytes(&y, sizeof(struct student));
  return 0;
}

void print_bytes(const void *obj, size_t size) {
  const unsigned char *p = obj;
  for (size_t i = 0; i < size; i++) {
    printf("%02x ", p[i]);
  }
  printf("\n");
}