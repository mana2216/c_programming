#include <stdio.h>

int main(void)
{
  int age;
  do {
    printf("Your age? ");
    scanf("%d", &age);
  } while(age < 0);

  printf("age = %d\n", age);
  return 0;
}