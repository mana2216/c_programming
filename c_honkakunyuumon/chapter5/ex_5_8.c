#include <stdio.h>

int main(void)
{
    printf("     1  2  3  4  5  6  7  8  9\n");
    printf("------------------------\n");

    for (int i = 1; i <= 9; i++) {
        printf("%d | ", i);
        for (int j = 1; j <= 9; j++) {
            if (j != 9) {
                printf("%2d ", i * j);
            } else {
                printf("%2d\n", i * j);
            }
        }
    }
}