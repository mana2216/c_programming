#include <stdio.h>

int main(void) {
  short snum = -10;
  long lnum = -10;

  if (snum == lnum) {
    // trueになる
  }

  if (snum == (short)lnum) {
    // trueになる
  }

  if ((unsigned short)snum == -10) {
    // falseになる
  }
}