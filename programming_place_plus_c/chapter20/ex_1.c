#include <stdio.h>

int main(void) {
  float n = 0.0f;

  for (int i = 0; i < 100; ++i) {
    n += 1.0f;
  }
  n /= 100.0f;
  printf("%.1f\n", n);
  return 0;
}