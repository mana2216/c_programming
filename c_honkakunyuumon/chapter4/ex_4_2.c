#include <stdio.h>

int main(void)
{
    int a, b;
    printf("a = ? ");
    scanf("%d", &a);
    printf("b = ? ");
    scanf("%d", &b);

    printf("Bigger : %d\n", (a < b) ? b : a);
}