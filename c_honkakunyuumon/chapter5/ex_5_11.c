#include <stdio.h>

int main(void)
{

    do
    {
        printf("Menu:\n");
        printf("    1) Coffee\n");
        printf("    2) Cafe Latte\n");
        printf("    3) Tea\n");

        int menu;
        if (scanf("%d", &menu) != 1) {
            printf("数字を入力してください\n");
            while (getchar() != '\n');
            continue;
        }

        if (menu == 99)
        {
            break;
        }
        else if (menu == 1)
        {
            printf("Coffeeの価格は350円\n");
        }
        else if (menu == 2)
        {
            printf("Cafe Latteの価格は450円\n");
        }
        else if (menu == 3)
        {
            printf("Teaの価格は380円\n");
        }
        else
        {
            printf("1~3の数字から選んで入力してください\n");
        }
    } while (1);
}