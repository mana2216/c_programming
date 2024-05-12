#include <stdio.h>

int my_min(int, int);

int main(void)
{
    int a[5];
    for (size_t i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
        printf("a[%zu] >> ", i);
        scanf("%d", &a[i]);
    }

    int min_num = a[0];
    for (size_t i = 1; i < sizeof(a) / sizeof(a[0]); i++) {
        min_num = my_min(min_num, a[i]);
    }

    printf("最小値は %d です\n", min_num);
}

int my_min(int num1, int num2)
{
    if (num1 < num2) {
        return num1;
    } else {
        return num2;
    }
}