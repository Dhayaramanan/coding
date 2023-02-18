#include <stdio.h>

//function to find greatest of four integers
int max(int a, int b, int c, int d) {
    int largest = a; //setting largest as 'a' to compare with other numbers

    //comparing each number with largest number and assigning value to largest accordingly
    if (b > largest) {
        largest = b;
    }
    if (c > largest) {
        largest = c;
    }
    if (d > largest) {
        largest = d;
    }

    return largest;
}

int main() {
    int num1;
    int num2;
    int num3;
    int num4;

    scanf("%d%d%d%d", &num1, &num2, &num3, &num4);

    printf("%d\n", max(num1, num2, num3, num4));

    return 0;
}