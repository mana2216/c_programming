#include <stdio.h>

char *s1 = "ABCDE";
char s2[64];

int main(void)
{
  char *s3 = "ABCDE";
  char s4[64];

  printf("s1 = %p\n", s1);
  printf("s2 = %p\n", s2);
  printf("s3 = %p\n", s3);
  printf("s4 = %p\n", s4);
}