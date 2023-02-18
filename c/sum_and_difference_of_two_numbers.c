#include <stdio.h>

int main() {
    //two integer numbers
    int a;
    int b;

    //two float numbers
    float x;
    float y;

    //getting two integers as input
    scanf("%d%d", &a, &b);
    //getting two floats as input
    scanf("%f%f", &x, &y);

    //printing sum and difference of integers
    printf("%d %d\n", (a+b), (a-b));
    //printing sum and difference of floats
    printf("%.1f %.1f\n", (x+y), (x-y));

    return 0;
}