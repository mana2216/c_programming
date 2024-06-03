#include <stdio.h>

int main(void)
{
  double fahr = 100.0;
  printf("fahr >> ");
  scanf("%lf", &fahr);
  double cels = ((5.0/9)*(fahr-32));
}