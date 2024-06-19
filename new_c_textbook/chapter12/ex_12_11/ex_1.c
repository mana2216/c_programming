#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
  char *month[] = {"January", "February", "March", "April", "May", "June", 
  "July", "August", "September", "Octorber", "November", "December", NULL};

  printf("month >> ");
  char buf[10];
  fgets(buf, sizeof(buf), stdin);
  int num_month;
  sscanf(buf, "%d", &num_month);

  if (num_month < 1 || 12 < num_month) {
    fputs("out of range\n", stderr);
    exit(EXIT_FAILURE);
  }

  printf("%s\n", month[num_month - 1]);
  return 0;
}