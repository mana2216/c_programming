#include <stdio.h>

int Add(int, int);

int main(void)
{
  printf("int (*Add)(int, int) = %p\n", Add);
}

int Add(int a, int b)
{
  return a+b;
}