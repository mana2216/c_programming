#include <stdio.h>

int Pow(int a, int b);

int main(void)
{
    int a = 3;
    int b = 4;
    int ans = Pow(a, b);
    printf("a to the power of b = %d\n", ans);
}

int Pow(int a, int b)
{
    int total_power = 1;
    for (int i = 0; i < b; i++) {
        total_power *= a;
    }

    return total_power;
}