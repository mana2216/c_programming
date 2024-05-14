#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[40];
    printf("str1? ");
    scanf("%s", str1);

    char str2[40];
    printf("str2? ");
    scanf("%s", str2);

    if (strcmp(str1, str2) == 0) {
        printf("Same\n");
    } else {
        puts("Different");
    }
}