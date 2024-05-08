#include <stdio.h>

int main(void)
{
    printf("Menu:\n");
    printf("    1) Coffee\n");
    printf("    2) Cafe Latte\n");
    printf("    3) Tea\n");

    int menu;
    scanf("%d", &menu);

    switch (menu)
    {
    case 1:
        puts("350円");
        break;
    case 2:
        puts("450円");
        break;
    case 3:
        puts("380円");
        break;
    
    default:
        puts("Error");
        break;
    }
}