#include <iostream>

int main() {
    int testCases{};
    std::cin >> testCases;

    for (int i{0}; i < testCases; ++i) {
        int numberOfFriends{};
        int goldAvailable{};
        int carryGold{};

        std::cin >> numberOfFriends >> goldAvailable >> carryGold;

        if ((numberOfFriends + 1) * carryGold > goldAvailable) {
            std::cout << "Yes\n";
        } else {
            std::cout << "No\n";
        }
    }
}