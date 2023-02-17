#include <iostream>
#include <cmath>

void sum_and_difference(int* number1, int* number2) {
    //number1 holds sum
    //number2 holds difference

    *number1 = *number1 + *number2;
    int temp = *number1 - *number2;
    *number2 = std::abs(*number2 - temp);
}

int main() {
    int a{};
    int b{};

    std::cin >> a;
    std::cin >> b;

    sum_and_difference(&a, &b);

    std::cout << a << '\n' << b << '\n';

    return 0;
}