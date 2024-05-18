#include <stdio.h>
#include <math.h>
// #define M_PI 3.1415826535897932846


int main(void)
{
    double enemyX;
    double enemyY;
    printf("enemyX >> ");
    scanf("%lf", &enemyX);
    printf("enemyY >> ");
    scanf("%lf", &enemyY);

    double rad =atan2(enemyX ,enemyY);
    double pi_rad = rad * M_PI;
    double deg = pi_rad * 180;
    printf("角度は %lf ° です\n", deg);
}