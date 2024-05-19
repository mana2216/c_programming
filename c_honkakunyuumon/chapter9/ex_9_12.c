#include <stdio.h>

typedef struct {
    char first_name[128];
    char family_name[128];
    int age;
    double height;
    double weight;
} Person;

int main(void)
{
    Person array[5];

    int sum_age = 0;
    double sum_height = 0.0;
    double sum_weight = 0.0;

    for (int i = 0; i < 5; i++) {
        printf("%d人目\n", i+1);

        printf("first_name >> ");
        scanf("%s", array[i].first_name);

        printf("family_name >> ");
        scanf("%s", array[i].family_name);

        printf("age >> ");
        scanf("%d", &array[i].age);
        sum_age += array[i].age;

        printf("height >> ");
        scanf("%lf", &array[i].height);
        sum_height += array[i].height;

        printf("weight >> ");
        scanf("%lf", &array[i].weight);
        sum_weight += array[i].weight;
    }

    int avg_age = sum_age / 5;
    double avg_height = sum_height / 5;
    double avg_weight = sum_weight / 5;

    printf("平均年齢 : %d\n", avg_age);
    printf("平均身長 : %.1lf\n", avg_height);
    printf("平均体重 : %.1lf\n", avg_weight);
}