#include <stdio.h>

int my_max(int, int);

int main(void)
{
    int apples[] = { 364000, 70100, 47200, 44400 };
    char alphabet[] = { 'A', 'B', 'C', 'D' };

    int max_apple = apples[0];
    for (int i = 1; i < 4; i++) {
        max_apple = my_max(max_apple, apples[i]);
    }

    for (size_t i = 0; i < (sizeof(apples) / sizeof(apples[0])); i++) {
        int bar_graph_size = (double)apples[i] / (double)max_apple * 40;
        for (int j = 0; j < bar_graph_size; j++) {
            if (j != bar_graph_size - 1) {
                printf("%c", alphabet[i]);
            } else {
                printf("%c\n", alphabet[i]);
            }
        }
    }
}

int my_max(int num1, int num2)
{
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}