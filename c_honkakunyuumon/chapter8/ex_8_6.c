#include <stdio.h>

int Add(int a, int b);

int main(void)
{
    int a = 0;
    int b = 0;
    int c = Add(a, b);
    printf("a + b = %d\n", c);
}

int Add(int a, int b)
{
    printf("a >> ");
    scanf("%d", &a);
    printf("b >> ");
    scanf("%d", &b);
    int c = a + b;
    return c;
}