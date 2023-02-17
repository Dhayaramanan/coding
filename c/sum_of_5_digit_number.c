#include <stdio.h>

int calculateNumberOfDigits(int number) {
    int count = 0;
    while (number > 0) {
        number = number / 10;
        count += 1;
    }

    return count;
}

int calculateSumOfDigits(int number) {
    int sum = 0;
    int count = calculateNumberOfDigits(number);

    while (count) {
        int rem = number % 10;
        sum += rem;
        number = number / 10;
        --count;
    }

    return sum;
}

int main() {
    int number;
    scanf("%d", &number);

    printf("%d\n", calculateSumOfDigits(number));

    return 0;
}