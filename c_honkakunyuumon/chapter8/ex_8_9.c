#include <stdio.h>

int Calc(int type, int a, int b);

int main(void)
{
    int type;
    printf("type >> ");
    scanf("%d", &type);

    int a;
    printf("a >> ");
    scanf("%d", &a);

    int b;
    printf("b >> ");
    scanf("%d", &b);

    int ans = Calc(type, a, b);
    printf("asnwer = %d\n", ans);
}

int Calc(int type, int a, int b)
{
    switch (type)
    {
    case 1:
        return a + b;
        break;
    case 2:
        return a - b;
        break;
    case 3:
        return a * b;
        break;
    case 4:
        return a / b;
        break;
    
    default:
        printf("Unknown Calc type : %d\n", type);
        exit(1);
        break;
    }
}