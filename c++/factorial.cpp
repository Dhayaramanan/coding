#include <iostream>

long factorial(long num) {
    long fact = 1;

    for (int i = num; i >= 1; --i) {
        fact *= i;
    }

    return fact;
}

int main() {
    std::cout << "Enter a number: ";
    long number{};
    std::cin >> number;

    std::cout << number << "! = " << factorial(number) << '\n';

    return 0;
}