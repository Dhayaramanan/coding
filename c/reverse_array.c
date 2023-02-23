#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;
    scanf("%d", &size);

    int* arr = (int*)malloc(size * sizeof(int));

    for (size_t i = 0; i < size; ++i) {
        scanf("%d", &*(arr + i));
    }

    //reversing array
    for (int i = 0; i < size/2; ++i) {
        int temp = arr[i];
        arr[i] = arr[size - i -1];
        arr[size - i - 1] = temp;
    }

    for (size_t i = 0; i < size; ++i) {
        printf("%d ", *(arr + i));
    }

    free(arr);

    return 0;
}