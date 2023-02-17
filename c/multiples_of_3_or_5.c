#include <stdio.h>

int main() {
    int lowerLimit = 1;
    int upperLimit = 1000;

    int sum = 0;

    for (int i = lowerLimit; i <= upperLimit; ++i) {
        if ((i % 3 == 0) || (i % 5 == 0)) {
            sum += i;
        }
    }

    printf("%d\n", sum);

    return 0;
}