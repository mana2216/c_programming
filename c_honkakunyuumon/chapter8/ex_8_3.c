#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand((unsigned)time(NULL));
    for (int i = 0; i < 100; i++) {
        double r = (double)rand() / RAND_MAX * 100.0;
        printf("%d 回目 : %lf\n", i+1, r);
    }
}