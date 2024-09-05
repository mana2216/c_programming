#include <stdio.h>

int main(void) {
  int value;

  printf("%s", "please input integer >> ");
  scanf("%d", &value);

  if (value > 0) {
    puts("plus");
  } else {
    if (value == 0) {
      puts("zero");
    } else {
      puts("minus");
    }
  }
  
  return 0;
}