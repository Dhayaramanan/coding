#include <iostream>

int main() {
    int daysWithFriends{};
    int daysWithFamily{};

    int vacationDays{};

    std::cin >> daysWithFamily >> daysWithFriends >> vacationDays;

    if ((daysWithFamily + daysWithFriends) <= vacationDays) {
        std::cout << "Yes\n";
    } else {
        std::cout << "No\n";
    }

    return 0;
}