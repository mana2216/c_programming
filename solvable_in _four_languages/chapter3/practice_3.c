#include <stdio.h>

int main(void) {
    int A, B;
    scanf("%d %d", &A, &B);

    int ans;
    if (A == B) {
        ans = 1;
    } else if (A > B) {
        ans = 1;
    } else {
        ans = B / A;
        if (B % A != 0) {
            ans += 1;
        }
    }
    printf("%d\n", ans);
    return 0;
}