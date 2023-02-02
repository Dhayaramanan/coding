#include <iostream>

int main() {
    int credit_score{};
    std::cin >> credit_score;

    if (credit_score >= 750) {
        std::cout << "Yes\n";
    } else {
        std::cout << "No\n";
    }
}