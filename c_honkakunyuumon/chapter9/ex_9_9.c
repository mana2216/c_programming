#include <stdio.h>
#include <math.h>

typedef struct {
    double X1;
    double Y1;
    double width;
    double height;
} Rect2;

double CalcRect2Area(Rect2 r);

int main(void)
{
    Rect2 r;
    printf("X1 >> ");
    scanf("%lf", &r.X1);
    printf("Y1 >> ");
    scanf("%lf", &r.Y1);
    printf("width >> ");
    scanf("%lf", &r.width);
    printf("height >> ");
    scanf("%lf", &r.height);

    double area = CalcRect2Area(r);

    printf("area = %.1lf\n", area);
}

double CalcRect2Area(Rect2 r)
{
    return fabs(r.width) * fabs(r.height);
}