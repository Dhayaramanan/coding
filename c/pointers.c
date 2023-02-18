/*
 * Name: Dhayaramanan R
 * Language: C
 * Task: To update value of two numbers using pointers
 * Date: feb 18 2023
*/

#include <stdio.h> //for i/o
#include <stdlib.h> //for abs() function

/*
 * Function to update value of first number to sum of two numbers
 * and second number to hold their difference
*/
void update(int* number1, int* number2) {
    *number1 = *number1 + *number2;
    int temp = *number1 - *number2;
    *number2 = abs(*number2 - temp);
}

int main() {
    int num1;
    int num2;

    scanf("%d%d", &num1, &num2);

    //calling update() to update the value of num1 and num2
    update(&num1, &num2);

    printf("%d\n%d\n", num1, num2);

    return 0;
}