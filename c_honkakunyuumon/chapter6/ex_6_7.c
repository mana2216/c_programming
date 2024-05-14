#include <stdio.h>

int main(void)
{
    int scores[5];
    printf("5人分のゲームの得点を入力してください\n");
    size_t size = sizeof(scores) / sizeof(scores[0]);
    for (size_t i = 0; i < size; i++) {
        printf("scores[%zu] >> ", i);
        scanf("%d", &scores[i]);
    }

    for (size_t i = size - 1; i > 0; i--) {
        for (size_t j = 0; j < i; j++) {
            if (scores[j] > scores[j+1]) {
                int tmp = scores[j];
                scores[j] = scores[j+1];
                scores[j+1] = tmp;
            }
        }
    }

    printf("中央値は %d です\n", scores[2]);
}