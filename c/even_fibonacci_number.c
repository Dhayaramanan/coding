#include <stdio.h>

long long getEvenFibonacciSum(int l, int h) {
    int t1 = 1;
    int t2 = 2;

    int t3 = 0;
    int sum = 0;

    for (long long i = l; i < h; ++i) {
        t3 = t1 + t2;
        t1 = t2;
        t2 = t3;

        if (t3 % 2 == 0) {
            sum += t3;
            // printf("%d ", t3);
        }
    }

    return sum;
}

int main() {
    int lowerLimit = 1;
    int upperLimit = 4000000;

    long long result = getEvenFibonacciSum(lowerLimit, upperLimit);

    printf("%d\n", result);

    return 0;
}