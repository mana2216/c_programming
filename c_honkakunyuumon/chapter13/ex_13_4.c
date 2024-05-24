#include <stdio.h>

#define D1 0
#define D2 1
#define VER 23

int main(void)
{
#if D1
  printf("Apple\n");
#else
  printf("Apricot\n");
#endif
#if D2
  printf("Mango\n");
#else
  printf("Melon\n");
#endif
#if D3
  printf("Lemon\n");
#else
  printf("Lime\n");
#endif
#if (VER < 25)
  printf("Peach\n");
#else
  printf("Pear\n");
#endif
#ifdef VER
  printf("Melon\n");
#else
  printf("Watermelon\n");
#endif
#ifdef NUMATA
  printf("Raspberry\n");
#else
  printf("Strawberry\n");
#endif
  return 0;
}