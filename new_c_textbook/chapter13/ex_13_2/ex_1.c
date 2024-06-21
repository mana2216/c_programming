#include <stdio.h>

int main(void) {
  int a[4][7];
  // int o      a[4][7]
  // int o [4][7]

  int (*p)[7];
  // int o        (*p)[7]
  // int o [7]    (*p)
  //int (*o)[7]     p
}