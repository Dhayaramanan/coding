#include <iostream>

int main() {
    int n {}; //test cases
    int k {}; //divisor

    std::cin >> n >> k;

    int number{};
    int count{};

    for (int i{0}; i < n; ++i) {
        std::cin >> number;

        if (number % k == 0) {
            ++count;
        }
    }

    std::cout << count << '\n';

    return 0;
}