#include <stdio.h>

int main(void)
{
    int a, b;
    printf("a >> ");
    scanf("%d", &a);
    printf("b >> ");
    scanf("%d", &b);

    if (100 <= a && a < 200 && 1000 <= b) {
        puts("OK");
    } else {
        puts("Error");
    }
}