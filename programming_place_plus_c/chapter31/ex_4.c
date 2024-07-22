#include <stdio.h>

typedef struct {
  float x;
  float y;
} PointF;

typedef struct {
  PointF lt;
  PointF rb;
} RectF;

int main(void) {
  RectF rect;
  RectF* p_rect = &rect;
  PointF* p_point = &rect.lt;

  p_point->x = 15.0f;
  p_point->y = 20.0f;
  p_rect->rb.x = 10.0f;
  p_rect->rb.y = 30.0f;

  printf("%f %f %f %f\n", rect.lt.x, rect.lt.y, rect.rb.x, rect.rb.y);
}