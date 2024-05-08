#include <stdio.h>

int main(void)
{
    int a;
    printf("a >> ");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        puts("Coffee");
        break;
    case 2:
        puts("Cafe Latte");
        break;
    case 3:
        puts("tea");
        break;
    
    default:
        puts("Error");
        break;
    }
}