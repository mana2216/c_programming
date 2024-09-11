#include <stdio.h>

int main(void) {
  int age = 25;

  if (age < 20) {
    printf("%s\n", "You are minor");
    printf("%s\n", "Welcome!");
  } else {
    printf("%s\n", "You are adult");
    printf("%s\n", "Bye");
  }
  
  return 0;
}