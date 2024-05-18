#include <stdio.h>
#include <limits.h>

long fibonacci(long array[], int index);

int main(void)
{
    long array[10];
    int size = (int)sizeof(array) / sizeof(array[0]);
    for (int i = 0; i < size; i++) {
        array[i] = INT_MIN;
    }

    array[0] = 0;
    array[1] = 1;

    fibonacci(array, size-1);

    for (int i = 0; i < size; i++) {
        printf("%d番目 : %ld\n", i, array[i]);
    }
}

long fibonacci(long array[], int index)
{
    if (index == 0) {
        return 0;
    }

    if (index == 1) {
        return 1;
    }

    if (array[index] != INT_MIN) {
        return array[index];
    }

    array[index] = fibonacci(array, index - 1) + fibonacci(array, index - 2);
    return array[index];
}