#include <stdio.h>

int main(void)
{
    int scores[5];
    puts("5人分のゲームの得点を入力してください");
    size_t size = sizeof(scores) / sizeof(scores[0]);
    for (size_t i = 0; i < size; i++) {
        printf("scores[%zu] >> ", i);
        scanf("%d", &scores[i]);
    }

    int sorted_scores[5];

    for (int i = 0; i < 5; i++) {
        int min_score = 777;
        int index = 0;
        for (size_t j = 0; j < size; j++) {
            if (min_score > scores[j]) {
                min_score = scores[j];
                index = j;
            }
        }
        sorted_scores[i] = min_score;
        scores[index] = 99999;
    }

    for (int i = 0; i < 5; i++) {
        printf("sorted_scores[%i] : %d\n", i, sorted_scores[i]);
    }
}