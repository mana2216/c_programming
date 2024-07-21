#include <stdio.h>
#include <assert.h>

//#define NDBUG

int main(void) {
#ifndef NDBUG
fputs("error\n", stderr);
#endif

}