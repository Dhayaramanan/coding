#include <iostream>

int sum(int a, int b, int c) {
    return (a + b + c);
}

int main() {
    //medals won by country 1
    int goldMedal1{};
    int silverMedal1{};
    int bronzeMedal1{};

    //medals won by country 2
    int goldMedal2{};
    int silverMedal2{};
    int bronzeMedal2{};

    std::cin >> goldMedal1 >> silverMedal1 >> bronzeMedal1
            >> goldMedal2 >> silverMedal2 >> bronzeMedal2;

    int total1 = sum(goldMedal1, silverMedal1, bronzeMedal1);
    int total2 = sum(goldMedal2, silverMedal2, bronzeMedal2);

    if (total1 > total2) {
        std::cout << 1 << '\n';
    } else {
        std::cout << 2 << '\n';
    }

    return 0;
}