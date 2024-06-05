#include <stdio.h>

int main(void)
{
  int extension;
  printf("extension >> ");
  scanf("%d", &extension);

  switch (extension)
  {
  case 1001:
  case 1002:
    printf("Management\n");
    break;
  case 1011:
  case 1012:
    printf("Personnel\n");
    break;
  case 1008:
  case 1009:
  case 1013:
    printf("Sales & Marketing\n");
    break;
  case 2011:
    printf("Research & Development\n");
    break;
  case 1501:
  case 2501:
    printf("Production\n");
    break;
  default:
    printf("Unknown section\n");
    break;
  }
}