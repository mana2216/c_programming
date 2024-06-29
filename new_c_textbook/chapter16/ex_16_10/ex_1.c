#include <stdio.h>
#include <stdlib.h>

struct bill {
  int id;
  int food, drink;
  int table;
  struct bill *next;
};

void create_bill_info(struct bill **);
void show_bill(struct bill *);
struct bill * search_bill(struct bill *, int id);
void del_bill(struct bill **, struct bill *);

int main(void) {
  struct bill *head = NULL;
  create_bill_info(&head);
  show_bill(head);
  struct bill *tmp = NULL;
  tmp = search_bill(head, 103);
  del_bill(&head, tmp);
  struct bill *p;
  while (head != NULL) {
    p = head->next;
    free(head);
    head = p;
  }
  return 0;
}

void create_bill_info(struct bill **head) {
  struct bill *p;
  for (int i = 0; i < 3; i++) {
    if ((p = malloc(sizeof(struct bill))) == NULL) {
      fputs("動的領域確保に失敗しました\n", stderr);
      exit(EXIT_FAILURE);
    }
    char buf[40];
    int id;
    int food;
    int drink;
    int table;

    printf("id >> ");
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%d", &id);

    printf("food >> ");
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%d", &food);

    printf("drink >> ");
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%d", &drink);

    printf("table >> ");
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%d", &table);

    p->id = id;
    p->food = food;
    p->drink = drink;
    p->table = table;
    p->next = *head;
    *head = p;
  }
}

void show_bill(struct bill *head) {
  struct bill *p;
  for (p = head; p != NULL; p = p->next) {
    printf("id = %d\n"
          "food = %d\n"
          "drink = %d\n"
          "table = %d\n",
          p->id, p->food, p->drink, p->table
    );
    printf("\n");
  }
}

struct bill * search_bill(struct bill *head, int id) {
  struct bill *p = head;
  while (p != NULL) {
    if (p->id == id) {
      break;
    }
    p = p->next;
  }
  return p;
}

void del_bill(struct bill **head, struct bill *tmp) {
  if (*head == NULL) {
    return;
  }
  if (tmp == NULL) {
    return;
  }
  if ((*head)->id == tmp->id) {
    struct bill *next = (*head)->next;
    free(*head);
    *head = next;
    return;
  }
  struct bill *p = (*head);
  while (p != NULL && p->next != NULL) {
    if ((p->next)->id == tmp->id) {
      struct bill *to_delete = p->next;
      p->next = to_delete->next;
      free(to_delete);
      break;
    }
    p = p->next;
  }
  return;
}