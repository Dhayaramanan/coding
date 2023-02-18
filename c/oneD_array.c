#include <stdio.h>
#include <stdlib.h>

int calculateSumOfElements(const int* const arr, size_t size) {
    int sum = 0;

    for (size_t i = 0; i < size; ++i) {
        sum += *(arr + i);
    }

    return sum;
}

int main() {
    int size;
    scanf("%d", &size);

    int* arr = (int*)malloc(size * sizeof(int));

    for (size_t i = 0; i < size; ++i) {
        scanf("%d", &*(arr + i));
    }

    int sum = calculateSumOfElements(arr, size);

    free(arr);

    printf("%d\n", sum);

    return 0;
}