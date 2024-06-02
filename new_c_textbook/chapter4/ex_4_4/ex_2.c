#include <stdio.h>

int main(void)
{
  int x, y, z;
  (x=((y==2)!=3));
  (((x=y)==2)!=3);
  ((x==3)||(y==2));
  ((x==1)||((y==2)&&(z==3)));
  (x=(y=z));
}