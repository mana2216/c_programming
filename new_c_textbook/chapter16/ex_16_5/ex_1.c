#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student.h"

#define NELEMS(a) (sizeof(a)/sizeof((a)[0]))

void list(void);
void show(void);
void change_age(void);

struct student student[] = {
  {101, "Taro Suzuki", 18},
  {102, "Hanako Sato", 18},
  {0, "", 0},
  {0, "", 0},
};

void list(void) {
  for (int i = 0; i < NELEMS(student); i++) {
    if (student[i].id == 0) {
      continue;
    }
    printf("#%d: %s(%hd)\n", student[i].id, student[i].name, student[i].age);
  }
  return;
}

void show(void) {
  char buf[1024];
  int i, id;
  
  printf("ID? ");
  fgets(buf, sizeof(buf), stdin);
  id = atoi(buf);

  for (i = 0; i < NELEMS(student); i++) {
    if (id == student[i].id) {
      break;
    }
  }
  if (i < NELEMS(student)) {
    printf("#%d: %s(%hd)\n", student[i].id, student[i].name, student[i].age);
  } else {
    printf("#%d not found\n", id);
  }
  return;
}

void change_age(void) {
  printf("change_index >> ");
  char buf[40];
  int change_index;
  fgets(buf, sizeof(buf), stdin);
  sscanf(buf, "%d", &change_index);

  printf("change age >> ");
  int change_age;
  fgets(buf, sizeof(buf), stdin);
  sscanf(buf, "%d", &change_age);

  printf("student[%d].age : %d => ", change_index, student[change_index].age);
  student[change_index].age = change_age;
  printf("%d\n", student[change_index].age);
  return;
}

int main(void) {
  char cmd[1024];

  for (;;) {
    printf("command? (list or show or change_age or quit)");
    if (fgets(cmd, sizeof(cmd), stdin) == NULL) {
      break;
    }
    if (!strcmp(cmd, "list\n")) {
      list();
    } else if (!strcmp(cmd, "show\n")) {
      show();
    } else if (!strcmp(cmd, "quit\n")) {
      break;
    } else if (!strcmp(cmd, "change_age\n")) {
      change_age();
    } else {
      printf("Unknown command %s\n", cmd);
    }
  }

  printf("Bye!\n");
  return 0;
}