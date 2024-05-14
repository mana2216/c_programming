#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <math.h>
#include <limits.h>

int main(void)
{
    char str[40];
    printf("str? ");
    scanf("%s", str);
    char *end_ptr;
    int num = (int)strtol(str, &end_ptr, 10);
    printf("value=%d, x2=%d, x3=%d\n", num, num*2, num*3);
}