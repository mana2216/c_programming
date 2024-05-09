#include <stdio.h>

int main(void)
{
    printf("A)\n");
    for (int i = 1; i <= 4; i++) {
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }

    printf("B)\n");
    for (int i = 1; i <= 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (j < 4 - i) {
                printf("-");
            } else {
                printf("*");
            }
        }
        printf("\n");
    }

    printf("C)\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (i % 2 == 0)
            {
                if (j % 2 == 0) {
                    printf("-");
                } else {
                    printf("*");
                }
            }
            else
            {
                if (j % 2 == 0) {
                    printf("*");
                }
                else {
                    printf("-");
                }
            }
        }
        printf("\n");
    }

    int num = 1;
    printf("D)\n");
    for (int i = 1; i <= 4; i++) {
        for (int j = 0; j < 7; j++) {
            if (j < ((7-num) / 2) || ((7-num) / 2 + num) <= j) {
                printf("-");
            } else {
                printf("*");
            }
        }
        num += 2;
        printf("\n");
    }
}