#include <stdio.h>

int main(void) {
  int age;

  printf("How old are you ?");
  scanf("%d", &age);
  printf("You'll be %d years old next year.\n", ++age);
  
  return 0;
}