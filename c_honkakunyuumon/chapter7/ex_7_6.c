#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[256];
    printf("str >> ");
    scanf("%s", str);

    for (int i = (int)strlen(str) - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
}