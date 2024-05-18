#include <stdio.h>

typedef struct
{
    int X;
    int Y;
    double radius;
} Circle;


int main(void)
{
    Circle c1 = {3, 3, 3.0};
    printf("X = %d, Y = %d, radius = %.1lf\n", c1.X, c1.Y, c1.radius);
}