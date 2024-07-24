#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

const char *my_strchr(const char *s, int c);

int main(void) {
  char s[] = "abcde";
  printf("%p\n", s);
  int c = 'c';
  const char *p = my_strchr(s, c);
  if (p == NULL) {
    puts("文字列は見つかりませんでした");
  } else {
    printf("%cは見つかりました。文字列のアドレス : %p\n", c, p);
  }
}

const char *my_strchr(const char *s, int c) {
  assert(s != NULL);
  bool flag = true;
  while (*s != c) {
    if (*s == '\0') {
      flag = false;
      break;
    }
    s++;
  }

  return flag ? s : NULL;
}