#include <iostream>

char determineOffer(char a, char b, char c, char x, char y) {
    if (x == a || y == a)
        return a;
    else if (x == b || y == b)
        return b;
    else
        return c;
}

int main() {
    int testCases{};
    std::cin >> testCases;

    for (int i{0}; i < testCases; ++i) {
        char company1{};
        char company2{};
        char company3{};

        char firstOffer{};
        char secondOffer{};

        std::cin >> company1 >> company2 >> company3;
        std::cin >> firstOffer >> secondOffer;

        std::cout << determineOffer(company1, company2, company3, firstOffer,
                                    secondOffer) << '\n';
    }

    return 0;
}