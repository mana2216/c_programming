#include <stdio.h>

int main(void)
{
    double base;
    double height;
    scanf("%lf%lf", &base, &height);
    double area = (base * height) / 2;
    printf("%.2lf\n", area);
}