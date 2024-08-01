#include <stdio.h>
#include <wchar.h>

int main(void) {
  wchar_t *w1 = L"bcde";
  wchar_t *w2 = L"abcde";

  wchar_t *p1 = w1;
  wchar_t *p2 = w2;
  while (*p1 == *p2) {
    if (*p1 == L'\0' || *p2 == L'\0') {
      break;
    }
    p1++;
    p2++;
  }

  if (*p1 == L'\0' || *p2 == L'\0') {
    puts("同じ文字列です。");
  } else {
    puts("異なる文字列です");
  }
}




/*
int main(void) {
  wchar_t w1[] = L"abcde";
  wchar_t w2[] = L"abcde";

  size_t i;
  size_t count = 0;
  for (i = 0; w1[i] != L'\0' || w2[i] != L'\0'; i++) { 
    count++; 
  }

  printf("i = %zu\n", i);
  printf("count = %zu\n", count);

  if (w1[i] == L'\0' && w2[i] == L'\0') {
    puts("同じ文字列です");
  } else {
    puts("異なる文字列です");
  }
}
 */






/*
int main(void) {
  wchar_t w1[] = L"abcde";
  wchar_t w2[] = L"bcde";
  if (wcscmp(w1, w2) != 0) {
    printf("異なる文字列です\n");
  } else {
    printf("同じ文字列です\n");
  }
}
*/