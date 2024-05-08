#include <stdio.h>

int main(void)
{
    int a, b;
    printf("a >> ");
    scanf("%d", &a);
    printf("b >> ");
    scanf("%d", &b);

    if ((50 <= a && a <= 150) || b <= 500) {
        puts("OK");
    } else {
        puts("Error");
    }
}