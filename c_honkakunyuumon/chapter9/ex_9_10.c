#include <stdio.h>
#include <math.h>

typedef struct {
    char first_name[128];
    char family_name[128];
    int age;
    double height;
    double weight;
} Person;

double CalcBMI(Person p);

int main(void)
{
    Person p;
    printf("first_name >> ");
    scanf("%s", p.first_name);
    printf("family_name >> ");
    scanf("%s", p.family_name);
    printf("age >> ");
    scanf("%d", &p.age);
    printf("height >> ");
    scanf("%lf", &p.height);
    printf("weight >> ");
    scanf("%lf", &p.weight);

    double bmi = CalcBMI(p);

    printf("名前:%s.%s\n", p.first_name, p.family_name);
    printf("年齢:%d歳\n", p.age);
    printf("bmi:%.1lf\n", bmi);

    if (40 <= bmi) {
        printf("肥満(4度:Obese Level 4)\n");
    } else if (35 <= bmi) {
        printf("肥満(3度:Obese Level 3)\n");
    } else if (30 <= bmi) {
        printf("肥満(2度:Obese Level 2)\n");
    } else if (25 <= bmi) {
        printf("肥満(2度:Obese Level 1)\n");
    } else if (18.5 <= bmi) {
        printf("普通体重(Normal/Healthy)\n");
    } else {
        printf("低体重(やせ型:Underweight)\n");
    }
}

double CalcBMI(Person p)
{
    double bmi = p.weight / (p.height * p.height);
    return bmi;
}