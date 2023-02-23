#include <iostream>

void update(int* const number1, int* const number2) {
    *number1 = *number1 + *number2;
    int temp = *number1 - *number2;
    *number2 = std::abs(*number2 - temp);
}

int main() {
    int number1{};
    int number2{};

    std::cin >> number1 >> number2;

    update(&number1, &number2);

    std::cout << number1 << '\n' << number2 << '\n';

    return 0;
}