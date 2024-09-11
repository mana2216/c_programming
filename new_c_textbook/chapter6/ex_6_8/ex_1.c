#include <stdio.h>

int main(void) {
  int n;

  printf("%s", "How many times? ");
  scanf("%d", &n);
  do {
    if (n == 0) {
      break;
    }
    printf("%s\n", "Hello");
    n--;
  } while (n > 0);
  
  return 0;
}