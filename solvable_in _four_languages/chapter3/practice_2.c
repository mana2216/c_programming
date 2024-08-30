#include <stdio.h>

int main(void) {
    int d = 0;
    scanf("%d", &d);

    int degree = d / 60 / 60;
    int minute = d/ 60 % 60;
    int second = d % 60;

    printf("%d %d %d\n", degree, minute, second);
    return 0;
}