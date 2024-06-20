#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(void) {
  wchar_t name[100], *p;

  setlocale(LC_CTYPE, "");
  wprintf(L"あなたの名前は？ ");
  fgetws(name, sizeof(name)/sizeof(name[0]), stdin);
  if ((p = wcschr(name, L'\n')) != NULL) {
    *p = 0;
  }
  wprintf(L"こんにちは、%lsさん\n", name);
  return 0;
}