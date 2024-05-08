#include <stdio.h>

int main(void)
{
    int price;
    scanf("%d", &price);
    double tax = 0.1;
    int total = (int)(price + (price * tax));
    printf("%d\n", total);
}