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
        
        int remaining_litres = k;
        int remaining_bottles = n;
        if (x > k)
        {
            std::cout << 0 << '\n';
        }
        else {
            while (remaining_bottles != 0 && remaining_litres != 0)
            {
                --remaining_bottles;
                remaining_litres -= x;
            }
            std::cout << (n - remaining_bottles) << '\n';
        }
    }

    return 0;
}