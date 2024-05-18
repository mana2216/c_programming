#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand((unsigned)time(NULL));
    for (int i = 0; i < 100; i++) {
        int radom_num = rand() % 20 + 1;
        printf("%d回目 : %d\n", i+1, radom_num);
    }

}