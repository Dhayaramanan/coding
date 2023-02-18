#include <stdio.h>

int main() {
    char string[100];
    scanf("%[^\n]%*c", string);

    puts("Hello, World!");
    puts(string);

    return 0;
}