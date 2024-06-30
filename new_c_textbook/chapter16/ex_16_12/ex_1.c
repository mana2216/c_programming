#include <stdio.h>
#include <string.h>

#define MAX_ENTRIES 5

struct data
{
  enum data_info {num1, num2, d1, d2, num3} info;
  union
  {
    int num;
    double d;
  } u;
};


int main(void) {
  struct data entries[MAX_ENTRIES];
  for (int i = 0; i < MAX_ENTRIES; i++) {
    char buf[20];
    printf("data #%d? ", i);
    fgets(buf, sizeof(buf), stdin);

    if (!strcmp(buf, "end")) {
      break;
    }

    if (i == 0) {
      entries[i].info = num1;
      sscanf(buf, "%d", &entries[i].u.num);
    } else if (i == 1) {
      entries[i].info = num2;
      sscanf(buf, "%d", &entries[i].u.num);
    } else if (i == 2) {
      entries[i].info = d1;
      sscanf(buf, "%lf", &entries[i].u.d);
    } else if (i == 3) {
      entries[i].info = d2;
      sscanf(buf, "%lf", &entries[i].u.d);
    } else if (i == 4) {
      entries[i].info = num3;
      sscanf(buf, "%d", &entries[i].u.num);
    }
  }

  for (int i = 0; i < MAX_ENTRIES; i++) {
    switch (entries[i].info)
    {
    case num1:
    case num2:
    case num3:
      printf("data #%d: (int)%d\n", i, entries[i].u.num);
      break;
    case d1:
    case d2:
      printf("data #%d: (double)%lf\n", i, entries[i].u.d);
      break;
    
    default:
      break;
    }
  }
  return 0;
}