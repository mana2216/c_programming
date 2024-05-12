#include <stdio.h>

int main(void)
{
    printf("池の長さR[m]を入力してください >> ");
    double R;
    scanf("%lf", &R);

    printf("Aさんの移動速度[m/秒]を入力してください >> ");
    double moving_speed_A;
    scanf("%lf", &moving_speed_A);

    printf("Bさんの移動速度[m/秒]を入力してください >> ");
    double moving_speed_B;
    scanf("%lf", &moving_speed_B);

    double R_A = R;
    double R_B = R;

    int seconds = 0;

    for (;;) {
        seconds++;
        R_A -= moving_speed_A;
        R_B -= moving_speed_B;
        if (R_A == moving_speed_B * seconds || R_B == moving_speed_A * seconds) {
            break;
        }
    }

    printf("%d秒後に出会う\n", seconds);
}