#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int scores[5];
    size_t size = sizeof(scores) / sizeof(scores[0]);
    for (size_t i = 0; i < size; i++) {
        printf("a[%zu] >> ", i);
        scanf("%d", &scores[i]);
    }

    bool flag = false;

    for (size_t i = 1; i < size; i++) {
        if (scores[i-1] == scores[i]) {
            flag = true;
            break;
        }
    }

    if (flag) {
        puts("Yes");
    } else {
        puts("No");
    }
}