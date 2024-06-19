#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void) {
  char apple[] = "apple";
  char banana[] = "banana";
  char mango[] = "mango";
  char *fruits[] = {apple, banana, mango, NULL};
  for (char **p = fruits; *p != NULL; p++) {
    *p[0] = toupper(*p[0]);
    printf("%s\n", *p);
  }
}