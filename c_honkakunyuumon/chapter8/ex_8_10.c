#include <stdio.h>

int Max(int array[], int size);

int main(void)
{
    int array[] = {1, 9, 7, 10, 22, 0};
    int size = (int)sizeof(array) / sizeof(array[0]);
    int ans = Max(array, size);
    printf("max number : %d\n", ans);
}

int Max(int array[], int size)
{
    int max_num = array[0];
    for (int i = 1; i < size; i++) {
        if (max_num < array[i]) {
            max_num = array[i];
        }
    }

    return max_num;
}