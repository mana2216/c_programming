#include <stdio.h>

#define PRINT_LOG() printf("File: %s  Line: %d\n", __FILE__, __LINE__);

int main(void) {
  PRINT_LOG();
}