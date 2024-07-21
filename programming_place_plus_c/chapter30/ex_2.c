#include <stdio.h>
#include <assert.h>

int main(void) {
  int n = -2;
  ++n;
  assert(n >= 0);
}