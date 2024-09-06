#include <stdio.h>

int main(void) {
  printf("char => %zu\n", sizeof(char));
  printf("short => %zu\n", sizeof(short));
  printf("int => %zu\n", sizeof(int));
  printf("long int => %zu\n", sizeof(long int));
  printf("long long int => %zu\n", sizeof(long long int));
  
  return 0;
}