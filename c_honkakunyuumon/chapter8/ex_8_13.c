#include <stdio.h>


int main(void)
{
    double water;
    printf("water(g) >> ");
    scanf("%lf", &water);

    double concentration;
    printf("concentration(%%) >> ");
    scanf("%lf", &concentration);

    double salt = (concentration * water) / 100.0;
    printf("salt : %.1lf(g)\n", salt);
}