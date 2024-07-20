#include <stdio.h>
#include <stdbool.h>

struct Point {
  int x;
  int y;
};

void coordinate(struct Point);
int add_coordinate(struct Point);
bool compair_coordinate(struct Point, struct Point);

int main(void) {
  struct Point s1 = {1, 10};
  struct Point s2 = {3, 30};
  coordinate(s1);
  int result = add_coordinate(s1);
  printf("s1.x + s1.y => %d\n", result);
  if (compair_coordinate(s1, s2)) {
    printf("s1とs2は等しいです\n");
  } else {
    puts("2つの構造体は等しくありません。");
  }
}

void coordinate(struct Point s) {
  printf("座標(%d, %d)\n", s.x, s.y);
}

int add_coordinate(struct Point s) {
  return s.x + s.y;
}

bool compair_coordinate(struct Point s1, struct Point s2) {
  if (s1.x == s2.x && s1.y == s2.y) {
    return true;
  } else {
    return false;
  }
}