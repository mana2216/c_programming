#include <stdio.h>

int main(void)
{
  // 同じ変数の名前を使う
  int s;
  double s;
  printf("%d, %lf", s, s);
  return 0;
}