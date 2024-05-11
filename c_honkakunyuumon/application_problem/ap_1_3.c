    #include <stdio.h>

    int main(void)
    {
        for (int i = 1; i <= 9; i++) {
            for (int j = 1; j <= 9; j++) {
                for (int k = 1; k <= 9; k++) {
                    for (int l = 1; l <= 9; l++) {
                        for (int m = 1; m <= 9; m++) {
                            if ((i*10 + j) + k == (l*10+ m)) {
                                printf("%d%d + %d = %d%d\n", i, j, k, l, m);
                            }
                        }
                    }
                }
            }
        }
    }