#include <stdio.h>

int main(void) {
  int i, data;
  
  i = 0;

  for (;;) {
    if (i >= 10) {
      break;
    }

    scanf("%d", &data);

    if (data < 0) {
      break;
    }

    printf("%d %d\n", i, data);
    i++;
  }

  printf("%s\n", "finish");
  
  return 0;
}