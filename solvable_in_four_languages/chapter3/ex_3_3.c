#include <stdio.h>

int main(void) {
    int a, t, r;
    scanf("%d %d %d", &a, &t, &r);
    double elapsed_time_per_degree = (double)t / (double)a;
    double ans = elapsed_time_per_degree * r;
    printf("%lf\n", ans);
    return 0;
}