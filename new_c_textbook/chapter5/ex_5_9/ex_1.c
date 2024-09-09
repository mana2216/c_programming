#include <stdio.h>
#include <stddef.h>

int main(void) {
  printf("size_t => %zu\n", sizeof(size_t));
  printf("unsigned int => %zu\n", sizeof(unsigned int));
  printf("unsigned long int => %zu\n", sizeof(unsigned long int));
  printf("unsinged long long int => %zu\n", sizeof(unsigned long long int));
  
  return 0;
}