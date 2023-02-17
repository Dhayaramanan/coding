#include <iostream>
#include <cmath>

int moneyToInvest(int y, int x) {
    return std::abs(y - x);
}

int main() {
    int testCases{};
    std::cin >> testCases;

    for (int i{0}; i < testCases; ++i) {
        int earning{};
        int invested{};

        std::cin >> earning >> invested;

        std::cout << moneyToInvest(earning, invested) << '\n';
    }

    return 0;
}