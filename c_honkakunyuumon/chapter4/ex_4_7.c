#include <stdio.h>

int main(void)
{
    int year;
    printf("現在の年を西暦で入力してください >> ");
    scanf("%d", &year);

    if (year < 1868 || 2024 < year) {
        puts("Error");
    } else if (2019 <= year) {
        printf("R%d\n", year - 2019 + 1);
    } else if (1989 <= year) {
        printf("H%d\n", year - 1989 + 1);
    } else if (1926 <= year) {
        printf("S%d\n", year - 1926 + 1);
    } else if (1912 <= year) {
        printf("T%d\n", year - 1912 + 1);
    } else {
        printf("M%d\n", year - 1868 + 1);
    }
}