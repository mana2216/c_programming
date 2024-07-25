#include <stdio.h>

struct Point{
  int x;
  int y;
  struct Point *next;
};

void print_points(const struct Point* head);

int main(void) {
  struct Point p1 = {1, 1, NULL};
  struct Point p2 = {2, 2, &p1};
  struct Point p3 = {3, 3, &p2};
  struct Point p4 = {4, 4, &p3};
  struct Point p5 = {5, 5, &p4};
  p1.next = &p5;

  print_points(&p5);
}

void print_points(const struct Point* head) {
  const struct Point* p = head;
  do {
    printf("%d %d\n", p->x, p->y);
    p = p->next;
  } while (p != head);
}