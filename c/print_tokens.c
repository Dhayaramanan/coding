#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char* s = (char*)malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s)+1);

    for (int i = 0; i < strlen(s)+1 && s[i] != '\0'; ++i) {
        if (s[i] == ' ') {
            printf("%c", '\n');
        
        }
        else
        printf("%c", s[i]);
    }

    free(s);
    puts("");

    return 0;
}