#include <stdio.h>

void calculateMaximum(const int* n, const int* k) {
    int max_and = 0;
    int max_or = 0;
    int max_xor = 0;

    for (int i = 1; i <= *n; ++i) {
        for (int j = 1; j <= i; ++j) {
            if (i == j) {
                continue;
            }
            int and = i & j;
            int or = i | j;
            int xor = i ^ j;

            if (and > max_and && and < *k) {
                max_and = and;
            }
            if (or > max_or && or < *k) {
                max_or = or;
            }
            if (xor > max_xor && xor < *k) {
                max_xor = xor;
            }
        }
    }

    printf("%d\n%d\n%d\n", max_and, max_or, max_xor);
}

int main() {
    int n;
    int k;

    scanf("%d%d", &n, &k);

    calculateMaximum(&n, &k);

    return 0;
}