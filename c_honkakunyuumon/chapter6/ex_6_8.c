#include <stdio.h>

char evaluation(double avg);

int main(void)
{
    int scores[5][3];
    char* subject[3] = {"国語", "数学", "英語"};
    printf("生徒5人分の国語、数学、英語の点数を0~100点で入力してください\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d人目の%sの点数 >> ", i+1, subject[j]);
            scanf("%d", &scores[i][j]);
        }
    }

    double avg[5];
    for (int i = 0; i < 5; i++) {
        int sum = 0;
        for (int j = 0; j < 3; j++) {
            sum += scores[i][j];
        }
        avg[i] = (double)sum / 3;
    }

    for (int i = 0; i < 5; i++) {
        printf("%d人目\n", i);
        for (int j = 0; j < 3; j++) {
            printf("%s : %d点\n", subject[j], scores[i][j]);
        }
        printf("平均点 %.1lf点\n", avg[i]);
        char eval = evaluation(avg[i]);
        printf("評価 : %c\n", eval);
    }
}

char evaluation(double avg)
{
    if (avg < 0 || 100 < avg) {
        return '-';
    } else if (80 <= avg && avg <= 100) {
        return 'A';
    } else if (70 <= avg) {
        return 'B';
    } else if (60 <= avg) {
        return 'C';
    } else {
        return 'D';
    }
}