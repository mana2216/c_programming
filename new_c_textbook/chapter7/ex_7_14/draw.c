#include <stdio.h>
#include <math.h>

#define PI 3.14

int sinpos(double, int);
static int cospos(double, int);
void drawcurves(int, int);

int sinpos(double angle, int max) {
  return (1+sin(angle)) * max / 2 + 0.5;
}

static int cospos(double angle, int max) {
  return (1+cos(angle)) * max / 2 + 0.5;
}

void drawcurves(int xmax, int ymax) {
  int x, y, sx, cx;
  double angle;

  for (y = 0; y <= ymax; y++) {
    angle = (2 * PI / ymax) * y;
    sx = sinpos(angle, xmax);
    cx = cospos(angle, xmax);
    for (x = 0; x <= xmax; x++) {
      if (x == sx) {
        printf("+");
      } else if (x == cx) {
        printf("*");
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }
  return;
}