#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand((unsigned)time(NULL));
    for (int i = 0; i < 100; i++) {
        int s = rand() % 2;
        int r;
        if (s == 0) {
            r = rand() % 10 + 1;
        } else {
            r = rand() % 10 * (-1) - 1;
        }

        printf("%d 回目 : %d\n", i+1, r);
    }
}