#include <stdio.h>

int main(void) {
  printf("%s", "Please input extention number >> ");
  int extention;
  scanf("%d", &extention);

  switch (extention) {
    case 1001:
    case 1002:
      printf("%s\n", "Management\n");
      break;
    case 1011:
    case 1012:
      printf("%s\n", "Personnel\n");
      break;
    case 1008:
    case 1009:
    case 1013:
      printf("%s\n", "Sales & Marketing\n");
      break;
    case 2011:
      printf("%s\n", "Research & Development\n");
      break;
    case 1501:
    case 2501:
      printf("%s\n", "Production\n");
      break;
    default:
      printf("%s\n", "Unknown section\n");
      break;
  }
  
  return 0;
}