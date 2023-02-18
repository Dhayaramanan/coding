/*
 * Name    : Dhayaramanan R
 * Language: C
 * Task    : if number less than 9 print its word in english else greater than 9
 * Date    : feb 18 2023
*/

#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);

    switch (number) {
        case 1:
            puts("one");
            break;
        case 2:
            puts("two");
            break;
        case 3:
            puts("three");
            break;
        case 4:
            puts("four");
            break;
        case 5:
            puts("five");
            break;
        case 6:
            puts("six");
            break;
        case 7:
            puts("seven");
            break;
        case 8:
            puts("eight");
            break;
        case 9:
            puts("nine");
            break;
        default:
            puts("Greater than 9");
            break;
    }

    return 0;
}