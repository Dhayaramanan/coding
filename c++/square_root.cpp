#include <cmath>
#include <iostream>

int main()
{
    int test_cases{};
    std::cin >> test_cases;

    int number{};
    for (int i{}; i < test_cases; ++i)
    {
        std::cin >> number;
        std::cout << static_cast<int>(std::sqrt(number)) << '\n';
    }

    return 0;
}
