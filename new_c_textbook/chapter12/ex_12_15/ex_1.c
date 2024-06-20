#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>

enum{ BUFLEN = 1024 };

int main(void) {
  wchar_t buf[BUFLEN], *p;
  wint_t count1 = 0;
  wint_t count2 = 0;

  if (setlocale(LC_CTYPE, "") == NULL) {
    fputs("setlocale failed\n", stderr);
    exit(EXIT_FAILURE);
  }

  while (fgetws(buf, sizeof(buf)/sizeof(buf[0]), stdin) != NULL) {
    if ((p = wcschr(buf, L'\n')) != NULL) {
      *p = 0;
    }
    for (p = buf; *p != 0; p++) {
      if (*p == L'あ') {
        count1++;
      } else if (*p == L'A') {
        count2++;
      }
    }

    wprintf(L"あ : %ld 回\n", count1);
    wprintf(L"A : %ld 回\n", count2);
  }
  return 0;
}