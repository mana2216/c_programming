#include <stdio.h>

int main(void) {
  int x, y;

  printf("%s", "1st value? ");
  scanf("%d", &x);

  printf("%s", "2nd value? ");
  scanf("%d", &y);

  int rect_area = x * y;

  printf("rect_area => %d\n", rect_area);
  
  return 0;
}