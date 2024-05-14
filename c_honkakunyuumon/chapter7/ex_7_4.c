#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[256];
    printf("str? ");
    fgets(str, sizeof(str), stdin);

    const char *sep = ", \n";
    char *token = strtok(str, sep);
    do
    {
        printf("%s (%zu)\n", token, strlen(token));

    } while ((token = strtok(NULL, sep)) != NULL);
}