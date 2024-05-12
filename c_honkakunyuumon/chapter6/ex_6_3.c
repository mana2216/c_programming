#include <stdio.h>

int main(void)
{
    int a[5];
    size_t size = sizeof(a) / sizeof(a[0]);

    for (size_t i = 0; i < size; i++) {
        printf("a[%zu] >> ", i);
        scanf("%d", &a[i]);
    }

    int sum = 0;
    for (size_t i = 0; i < size; i++) {
        sum += a[i];
    }

    double avg = (double)sum / size;

    printf("平均値は %.1lf です\n", avg);
}