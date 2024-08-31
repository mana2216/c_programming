#include <stdio.h>

int main(void) {
  printf("%s", "please input integer >> ");
  int val_1, val_2;
  scanf("%d %d", &val_1, &val_2);

  if (val_2 % val_1 == 0) {
    puts("Yes");
  } else {
    puts("No");
  }
  
  return 0;
}