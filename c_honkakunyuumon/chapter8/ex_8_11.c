#include <stdio.h>

int recursive_num(int num);

int main(void)
{
    int ans = recursive_num(100);
    printf("resurcive 100 : %d\n", ans);
}

int recursive_num(int num)
{
    if (num == 1) {
        return 1;
    }

    int total = num + recursive_num(num - 1);
    return total;
}