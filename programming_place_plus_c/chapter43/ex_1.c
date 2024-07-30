#include <stdio.h>
#include <stdlib.h>

#define EXIT_TYPE 2
int main(void) {
  static char stdout_buf[BUFSIZ];

  if (setvbuf(stdout, stdout_buf, _IOFBF, sizeof(stdout_buf)) != 0) {
    fputs("stdout のバッファリングを変更できませんでした。\n", stderr);
    exit(EXIT_FAILURE);
  }
  printf("test");

#if EXIT_TYPE == 0
  return 0;
#elif EXIT_TYPE == 1
  exit(EXIT_SUCCESS);
#elif EXIT_TYPE == 2
  abort();
#endif
}