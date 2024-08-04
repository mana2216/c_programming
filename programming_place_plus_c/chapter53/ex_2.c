#include <stdio.h>
#include <assert.h>

struct Data_tag {
  int num;
  struct Data_tag *next;
};

static struct Data_tag g_head;

void print_struct(struct Data_tag *);

int main(void) {
  struct Data_tag data00;
  struct Data_tag data01;
  struct Data_tag data02;

  g_head.num = 0;
  g_head.next = &data00;

  data00.num = 15;
  data00.next = &data01;
  
  data01.num = 30;
  data01.next = &data02;

  data02.num = 45;
  data02.next = NULL;

  print_struct(&g_head);
}

void print_struct(struct Data_tag *d) {
  assert(d != NULL);
  struct Data_tag *p = d;
  if (p->next == NULL) {
    printf("%d\n", p->num);
    return;
  }
  printf("%d\n", p->num);
  print_struct(p->next);
}