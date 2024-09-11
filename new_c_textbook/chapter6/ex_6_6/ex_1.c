#include <stdio.h>

int main(void) {
  int age;
  printf("%s", "Please input age >> ");
  scanf("%d", &age);

  while (age < 0) {
    printf("%s", "Your age?");
    scanf("%d", &age);
  }
  
  return 0;
}