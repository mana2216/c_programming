#include <stdio.h>

int main(void) {
    int F = 0;
    scanf("%d", &F);
    int selsius = (F - 30) / 2;
    printf("%d\n", selsius);
    return 0;
}