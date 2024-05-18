#include <stdio.h>
#include <math.h>

// #define PI 3.14

typedef struct
{
    int X;
    int Y;
    double radius;
} Circle;

double CalcCircleArea(Circle c);

int main(void)
{
    Circle c1;
    printf("c.X >> ");
    scanf("%d", &c1.X);

    printf("c.Y >> ");
    scanf("%d", &c1.Y);

    printf("c.radius >> ");
    scanf("%lf", &c1.radius);

    double area = CalcCircleArea(c1);
    printf("円の面積は %.1lf\n", area);
}

double CalcCircleArea(Circle c)
{
    double area = c.radius * c.radius * M_PI;
    return area;
}