#include <stdio.h>

int main(void) {
  printf("%s", "Please input age >> ");
  int age;
  scanf("%d", &age);

  if (age >= 20) {
    puts("大人");
  } else {
    puts("未成年");
  }
  
  return 0;
}