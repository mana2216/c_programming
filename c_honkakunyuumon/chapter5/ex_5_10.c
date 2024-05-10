#include <stdio.h>

void fibonacci(int num, long long array[]);

int main(void)
{
    long long array[91];
    fibonacci(90, array);
    size_t size = sizeof(array) / sizeof(array[0]);
    for (size_t i = 0; i < size; i++) {
        if (i != size - 1) {
            printf("%lld, ", array[i]);
        } else {
            printf("%lld\n", array[i]);
        }
    }
}

void fibonacci(int num, long long array[])
{
    array[0] = 0;
    array[1] = 1;

    for (int i = 2; i <= num; i++) {
        array[i] = array[i - 1] + array[i - 2];
    }
}