#include <stdio.h>

int main(void)
{
    int min;
    scanf("%d", &min);
    int hour = min / 60;
    int minute = min % 60;
    printf("%dh%dm\n", hour, minute);
}