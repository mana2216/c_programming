#include <stdio.h>

struct Point {
  int x;
  int y;
};

struct Rect {
  struct Point s1;
  struct Point s2;
};

int main(void) {
  struct Point s1 = {1, 10};
  struct Point s2 = {3, 30};
  struct Rect r = {s1, s2};
}