#include <stdio.h>
#include <stdlib.h>

typedef enum {
    Coffee = 1,
    CafeLate,
    Tea
} Menu;

int main(void)
{
    printf("Menu:\n");
    printf("    1) Coffee\n");
    printf("    2) Cafe Latte\n");
    printf("    3) Tea\n");

    printf("1~3の間の数字を入力してください >> ");

    int menu;
    scanf("%d", &menu);

    int price = 0;

    switch (menu)
    {
    case Coffee:
        price = 350;
        break;
    case CafeLate:
        price = 450;
        break;
    case Tea:
        price = 380;
        break;
    
    default:
        fputs("不正な値です\n", stderr);
        exit(EXIT_FAILURE);
        break;
    }

    if (price > 0) {
        printf("price : %d yen\n", price);
    } else {
        printf("Error\n");
    }
}