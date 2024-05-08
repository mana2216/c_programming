#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d%d", &a, &b);
    if (a < b) {
        printf("b = %dの方が大きい\n", b);
    } else {
        printf("a = %dの方が大きい\n", a);
    }
}