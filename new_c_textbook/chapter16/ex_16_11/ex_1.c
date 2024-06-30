#include <stdio.h>
#include <string.h>

union data2
{
  int i;
  double d;
  char s[17];
};


int main(void) {
  union data2 data2;
  char buf[80];

  printf("int i >> ");
  int num;
  fgets(buf, sizeof(buf), stdin);
  sscanf(buf, "%d", &num);
  data2.i = num;
  printf("data2.i = %d\n", num);

  printf("double d >> ");
  double d;
  fgets(buf, sizeof(buf), stdin);
  sscanf(buf, "%lf", &d);
  data2.d = d;
  printf("double d = %lf\n", d);

  printf("char s[17] >> ");
  fgets(buf, sizeof(char)*17, stdin);
  char *p;
  if ((p = strchr(buf, '\n')) != NULL) {
    *p = '\0';
  }
  strcpy(data2.s, buf);
  printf("char s[17] = %s\n", data2.s);
}