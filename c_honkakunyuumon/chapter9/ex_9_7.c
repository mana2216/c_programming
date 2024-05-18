#include <stdio.h>
#include <math.h>

typedef struct {
    double X1;
    double Y1;
    double X2;
    double Y2;
} Line;

double Calclength(Line l);

int main(void)
{
    Line l;
    printf("Line => X1 >> ");
    scanf("%lf", &l.X1);
    printf("Line => Y1 >> ");
    scanf("%lf", &l.Y1);
    printf("Line => X2 >> ");
    scanf("%lf", &l.X2);
    printf("Line => Y2 >> ");
    scanf("%lf", &l.Y2);

    double lineLength = Calclength(l);
    printf("線分の長さは %.1lf\n", lineLength);
}

double Calclength(Line l)
{
    double line_length = sqrt(pow(l.X2 - l.X1, 2.0) + pow(l.Y2 - l.Y1, 2.0));
    return line_length;
}