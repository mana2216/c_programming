#include <stdio.h>

int main(void)
{
    printf("A) ");
    for (int i = 1; i <= 10; i++) {
        if (i == 10) {
            printf("%d\n", i);
        } else {
            printf("%d, ", i);
        }
    }

    printf("B) ");
    for (int i = -5; i <= 5; i++) {
        if (i != 5) {
            printf("%d, ", i);
        } else {
            printf("%d\n", i);
        }
    }

    printf("C) ");
    for (int i = 1; i <= 19; i += 2) {
        if (i != 19) {
            printf("%d, ", i);
        } else {
            printf("%d\n", i);
        }
    }

    printf("D) ");
    for (int i = 2; i <= 20; i += 2) {
        if (i != 20) {
            printf("%d, ", i);
        } else {
            printf("%d\n", i);
        }
    }
}