#include <stdio.h>

int main(void)
{
    char name[256];
    printf("name >> ");
    scanf("%s", name);
    printf("Hello,%s!!\n", name);
}