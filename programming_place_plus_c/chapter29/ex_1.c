#include <stdio.h>

int main(void) {
  puts(__DATE__);
  puts(__TIME__);
  printf("%ld\n", __STDC_VERSION__);
}