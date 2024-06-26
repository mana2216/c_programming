#include <stdio.h>
#include <string.h>

struct person {
  char name[40];
  int date_of_birth;
};

int main(void) {
  struct person z;
  printf("name >> ");
  fgets(z.name, sizeof(z.name), stdin);
  char *p;
  if ((p = strchr(z.name, '\n')) != NULL) {
    *p = '\0';
  }
  printf("Date of Birth >> ");
  char buf[40];
  fgets(buf, sizeof(buf), stdin);
  sscanf(buf, "%d", &z.date_of_birth);
  printf("%s : %d\n", z.name, z.date_of_birth);
  return 0;
}