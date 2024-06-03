#include <stdio.h>
#include <stddef.h>

int main(void)
{
  printf("sizeof size_t = %zu\n", sizeof(size_t));
  printf("sizeof unsigned int = %zu\n", sizeof(unsigned int));
  printf("sizeof unsigned long int = %zu\n", sizeof(unsigned long int));
  printf("sizeof unsigned long long int = %zu\n", sizeof(unsigned long long int));
}