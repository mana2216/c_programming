#include <stdio.h>

void drawcurves(int, int);

void sinpos(void) {
  printf("Hello, this is sinpos\n");
  return;
}

int main(void)
{
  printf("[sine and cosine curves]\n");
  drawcurves(20, 20);
  return 0;
}