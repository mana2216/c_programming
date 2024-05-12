#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int scores[5];
    size_t size = sizeof(scores) / sizeof(scores[0]);
    for (size_t i = 0; i < size; i++) {
        printf("scores[%zu] >> ", i);
        scanf("%d", &scores[i]);
    }

    int sum = 0;
    for (size_t i = 0; i < size; i++) {
        sum += scores[i];
    }

    int avg = sum / size;

    int min_diff = 9999;
    int index = 0;
    for (size_t i = 0; i < size; i++) {
        if (min_diff > abs(avg - scores[i])) {
            min_diff = abs(avg - scores[i]);
            index = i;
        }
    }

    printf("平均点 %d に最も近い人は %d 番目の人です\n", avg, index);
}