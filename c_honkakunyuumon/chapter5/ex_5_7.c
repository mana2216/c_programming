#include <stdio.h>

int main(void)
{
    int a, b;
    printf("a >> ");
    scanf("%d", &a);
    printf("b >> ");
    scanf("%d", &b);

    if (b == 0)
    {
        printf("1\n");
    }
    else if (b < 0)
    {
        printf("Error\n");
    }
    else
    {
        int answer = 1;

        for (int i = 0; i < b; i++)
        {
            answer *= a;
        }

        printf("aのb乗は%d\n", answer);
    }

    return 0;
}