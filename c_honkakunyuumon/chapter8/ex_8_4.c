#include <stdio.h>
#include <math.h>

#define M_PI 3.1415826535897932846

int main(void)
{
    double angle;
    double base;
    printf("angle >> ");
    scanf("%lf", &angle);
    printf("base >> ");
    scanf("%lf", &base);

    double rad = angle * M_PI / 180;
    double height = base * tan(rad);
    printf("三角形の高さは %lf\n", height);
}