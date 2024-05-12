#include <stdio.h>

int main(void)
{
    int array[] = {420, 270, 360, 500};
    for (size_t i = 0; i < sizeof(array) / sizeof(array[0]); i++) {
        printf("%d\n", array[i]);
    }
}