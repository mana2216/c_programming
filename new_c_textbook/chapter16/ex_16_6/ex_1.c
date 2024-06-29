#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student.h"

void list(void);
void show(void);

struct student student[] = {
  {101, "Taro Suzuki", 18},
  {102, "Hanako Sato", 18},
  {0, "", 0},
  {0, "", 0},
  {-1, "", 0}
};

int main(void) {
  char cmd[1024];

  for (;;) {
    printf("command? (list, show, quit) ");
    if (fgets(cmd, sizeof(cmd), stdin) == NULL) {
      break;
    }
    if (!strcmp(cmd, "list\n")) {
      list();
    } else if (!strcmp(cmd, "show\n")) {
      show();
    } else if (!strcmp(cmd, "quit\n")) {
      break;
    } else {
      printf("Unknown command %s", cmd);
    }
  }
  printf("Bye!\n");
  return 0;
}

void list(void) {
  struct student *p;
  for (p = student; p->id != -1; p++) {
    if (p->id == 0) {
      continue;
    }
    printf("#%d: %s(%hd)\n", p->id, p->name, p->age);
  }
  return;
}

void show(void) {
  char buf[1024];
  int id;
  struct student *p;

  printf("ID? ");
  fgets(buf, sizeof(buf), stdin);
  id = atoi(buf);

  for (p = student; p->id != -1; p++) {
    if (id == p->id) {
      break;
    }
  }

  if (p->id != -1) {
    printf("#%d: %s(%hd)\n", p->id, p->name, p->age);
  } else {
    printf("#%d not found\n", id);
  }
  return;
}