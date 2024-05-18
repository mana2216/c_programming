#include <stdio.h>
#include <math.h>

typedef struct {
    double x1;
    double y1;
    double x2;
    double y2;
} Rect1;

double CalcRectArea(Rect1 r);

int main(void)
{
    Rect1 r;
    printf("Rect1 x1 >> ");
    scanf("%lf", &r.x1);
    printf("Rect1 y1 >> ");
    scanf("%lf", &r.y1);
    printf("Rect1 x2 >> ");
    scanf("%lf", &r.x2);
    printf("Rect1 y2 >> ");
    scanf("%lf", &r.y2);

    double rectArea = CalcRectArea(r);
    printf("React1 Area = %.1lf\n", rectArea);
}

double CalcRectArea(Rect1 r)
{
    double height = fabs(r.y2 - r.y1);
    double width = fabs(r.x2 - r.x1);
    double area = height * width;
    return area;
}