#include <stdio.h>

int main() {
    int input;
    scanf("%d", &input);

    if (input < 10) {
        printf("%d\n", 1);
    } else if ((input >= 10) && (input < 100)) {
        printf("%d\n", 2);
    } else if ((input >= 100) && (input <= 999)){
        printf("%d\n", 3);
    } else {
        puts("More than 3 digits");
    }


    //for calculating and printing the number of digits
    int count = 1; //number of digits

    int temp = input;

    while (temp / 10 != 0) {
        temp = temp / 10;
        count += 1;
    }

    printf("%d\n", count);

    return 0;
}