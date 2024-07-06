#include <stdio.h>

typedef void (*FUNC)(int);

FUNC signal(int sig, FUNC);