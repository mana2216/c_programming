#include <stdio.h>

int main(void)
{
    for (int i = 0; i <= 4; i++) {
        for (int j = 0; j <= 3; j++) {
            for (int k = 0; k <= 2; k++) {
                if ((i*30) + (j*40) + (k*60) == 120) {
                    printf("消しゴム%d個、鉛筆%d本、ボールペン%d本\n", i, j, k);
                }
            }
        }
    }
}