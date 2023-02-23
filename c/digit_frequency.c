#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void digitFrequency(const char* s, const int size, int* const frequency) {
    for (int i = 0; i < size; ++i) {
        if (s[i] == '0') {
            frequency[0] += 1;
        }
        if (s[i] == '1') {
            frequency[1] += 1;
        }
        if (s[i] == '2') {
            frequency[2] += 1;
        }
        if (s[i] == '3') {
            frequency[3] += 1;
        }
        if (s[i] == '4') {
            frequency[4] += 1;
        }
        if (s[i] == '5') {
            frequency[5] += 1;
        }
        if (s[i] == '6') {
            frequency[6] += 1;
        }
        if (s[i] == '7') {
            frequency[7] += 1;
        }
        if (s[i] == '8') {
            frequency[8] += 1;
        }
        if (s[i] == '9') {
            frequency[9] += 1;
        }
    }
}

int main() {
    char* string = (char*)malloc(1024 * sizeof(char));
    scanf("%s", string);
    string = realloc(string, strlen(string)+1);

    int frequency[10] = {0};

    digitFrequency(string, strlen(string)+1, frequency);

    for (int i = 0; i < 10; ++i) {
        printf("%d ", frequency[i]);
    }
    puts("");

    free(string);

    return 0;
}