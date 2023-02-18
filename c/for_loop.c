/*
 * Name     : Dhayaramanan R
 * Language : C
 * Task     : To print a statement according to the numbers in given interval
 * Date     : feb 18 2023
*/

#include <stdio.h>

int main() {
    int lowerLimit;
    int upperLimit;

    scanf("%d%d", &lowerLimit, &upperLimit);

    for (int i = lowerLimit; i <= upperLimit; ++i) {
        switch (i) {
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
                if (i % 2 == 0)
                    puts("even");
                else
                    puts("odd");
                break;
        }
    }

    return 0;
}