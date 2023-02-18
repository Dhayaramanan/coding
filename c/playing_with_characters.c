#include <stdio.h>

int main() {
    char ch;
    char string[100];
    char sentence[100];

    scanf("%c", &ch);
    scanf("%s", string);
    scanf("\n");
    scanf("%[^\n]%*c", sentence);

    printf("%c\n", ch);
    puts(string);
    puts(sentence);

    return 0;
}