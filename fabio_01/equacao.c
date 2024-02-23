#include <stdio.h>

int main() {
    int A, B, C, R, S, D;

    scanf("%d %d %d", &A, &B, &C);

    R = (A + B) * (A + B);
    S = (B + C) * (B + C);
    D = (R + S) / 2;

    printf("%d\n", D);

    return 0;
}
