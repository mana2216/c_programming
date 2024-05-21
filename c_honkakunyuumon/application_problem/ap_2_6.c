#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>

int main(void)
{
  char str[256];
  printf("str >> ");
  fgets(str, sizeof(str), stdin);
  int size = (int)strlen(str);

  bool flag = false;

  for (int i = 0; i < size; i++) {
    if (isalpha(str[i])) {
      flag = true;
    }
  }

  if (!flag) {
    fputs("No alphabet\n", stderr);
    exit(EXIT_FAILURE);
  }
  
  int count[26] = {0};
  double propotion[26] = {0.0};
  char ch = 'a';

  for (int i = 0; i < size; i++)
  {
    if (!isalpha(str[i]))
    {
      continue;
    }

    for (char j = ch; j <= 'z'; j++)
    {
      if (tolower(str[i]) == j)
      {
        int index = (int)j - ch;
        count[index]++;
      }
    }
  }

  for (int i = 0; i < 26; i++)
  {
    if (count[i] != 0)
    {
      propotion[i] = (double)count[i] / size * 100;
    }
  }

  for (int i = 0; i < 26; i++)
  {
    printf("%c : %d回, %.1lf%%\n", ch + (char)i, count[i], propotion[i]);
  }
}