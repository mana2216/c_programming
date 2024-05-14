#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char str[256];
    printf("str? ");
    fgets(str, sizeof(str), stdin);

    char c;

    for (int i = 0; (c = str[i]) != '\0'; i++) {
        c = toupper(c);
        str[i] = c;
    }
    printf("%s", str);
}