#include <stdio.h>

int f0(void);
int f1(void);
int f2(void);
int f3(void);
int f4(void);
int f5(void);
int f6(void);
int f7(void);
int f8(void);

int (*search(int (*a[3][3])(void)))(void);

int main(void) {
  int (*a[3][3])(void) = {
    {&f0, &f1, &f2},
    {&f3, &f4, &f5},
    {&f6, &f7, &f8},
  };

  int (*fp)(void);
  int z;
  fp = search(a);
  if (fp) {
    z = (*fp)();
    printf("Found %d!\n", z);
  } else {
    printf("Not found...\n");
  }
  return 0;
}

int f0(void) { return 0; }
int f1(void) { return 3; }
int f2(void) { return 8; }
int f3(void) { return 2; }
int f4(void) { return 5; }
int f5(void) { return 7; }
int f6(void) { return -1; }
int f7(void) { return 1; }
int f8(void) { return 6; }

int (*search(int (*a[3][3])(void)))(void){
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if ((*a[i][j])() < 0) {
        return a[i][j];
      }
    }
  }
  return NULL;
}