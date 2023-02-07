#include <iostream>

int main()
{
    int test_cases{};
    std::cin >> test_cases;

    for (int i{}; i < test_cases; ++i)
    {
        int initial_amount{};
        int money_spent{};

        //prices for water-ride
        //three level of prices
        int price1{};
        int price2{};
        int price3{};

        std::cin >> initial_amount >> money_spent >> price1 >> price2 >> price3;

        if ((initial_amount - money_spent) >= (price1 + price2 + price3))
        {
            std::cout << "Yes\n";
        }
        else
        {
            std::cout << "No\n";
        }
    }

    return 0;
}