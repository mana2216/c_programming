#include <stdio.h>

int main(void)
{
    printf("A) ");
    for (int i = 0; i < 4; i++) {
        for (int j = 1; j <= 3; j++) {
            printf("%d", j);
        }
    }
    printf("\n");

    printf("B) ");
    for (int i = 1; i <= 4; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d", i);
        }
    }
    printf("\n");

    printf("C) ");
    for (int i = 0; i < 2; i++) {
        for (int j = 1; j <= 3; j++) {
            for (int k = 0; k < 2; k++) {
                printf("%d", j);
            }
        }
    }
    printf("\n");
}