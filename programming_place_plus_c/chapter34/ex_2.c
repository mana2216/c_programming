#include <stdio.h>
#include <assert.h>

int my_memcmp(const void *, const void *, size_t size);

int main(void) {
  char buf1[] = "abcde";
  char buf2[] = "abcde";
  size_t size = sizeof(buf1) / sizeof(buf2);
  if (!my_memcmp(buf1, buf2, size)) {
    puts("文字列は等しいです。");
  } else {
    puts("文字列は異なります。");
  }
  return 0;
}

int my_memcmp(const void *s1, const void *s2, size_t size) {
  assert(s1 != NULL);
  assert(s2 != NULL);

  const unsigned char *p1 = s1;
  const unsigned char *p2 = s2;

  for (size_t i = 0; i < size; i++) {
    if (*p1 != *p2) {
      return (*p1 < *p2) ? -1 : 1;
    }
  }

  return 0;
}