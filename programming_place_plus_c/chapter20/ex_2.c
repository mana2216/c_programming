#include <stdio.h>

int main(void) {
  float f = 0.0f;
  for (int i = 0; i < 100; ++i) {
    f += 0.01f;
    printf("%e\n", f);
  }
}