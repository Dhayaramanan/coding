#include <iostream>

int main()
{
    int test_cases{};
    std::cin >> test_cases;

    int n{}; //number of bottles
    int x{}; //capacity of each bottle in litres
    int k{}; //number of remaining litres  in tank

    for (int i{}; i < test_cases; ++i)
    {
        std::cin >> n >> x >> k;

        if (k/x > n)
        {
            std::cout << n << '\n';
        }
        else
        {
            std::cout << k/x << '\n';
        }
    }

    return 0;
}