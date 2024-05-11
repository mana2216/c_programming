#include <stdio.h>

int main(void)
{
    int combination = 0;

    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            for (int k = 1; k <= 9; k++) {
                if ((i+j+k) == (i*j*k)) {
                    combination++;
                    printf("(%d, %d, %d)\n", i, j, k);
                }
            }
        }
    }
}