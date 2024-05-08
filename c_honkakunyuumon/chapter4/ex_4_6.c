#include <stdio.h>

int main(void)
{
    int score;
    printf("0~1000点の範囲でゲームの得点を入力してください >> ");
    scanf("%d", &score);

    if (score < 0 || 1000 < score) {
        puts("Error");
    }else if (900 <= score && score <= 1000) {
        puts("Rank S");
    } else if (750 <= score && score <= 899) {
        puts("Rank A");
    } else if (600 <= score && score <= 749) {
        puts("Rank B");
    } else {
        puts("Rank C");
    }
}