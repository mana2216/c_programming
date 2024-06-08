#include <stdio.h>

// #define IsMorning 0

int main(void) {
#if defined IsMorning
  #if IsMorning
    printf("Good morning!\n");
  #else
    printf("Good afternoon!\n");
  #endif
#else
  printf("Good night!\n");
#endif
  return 0;
}