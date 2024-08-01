#include <stdio.h>
#include <wchar.h>

int main(void) {
  wchar_t w1[] = L"abcde";
  wchar_t w2 = L'\0';
  printf("%zu\n", sizeof(w1));
  printf("%zu\n", sizeof(w2));
}