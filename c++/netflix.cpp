#include <iostream>

int main()
{
    int test_cases{};
    std::cin >> test_cases;

    for (int i{}; i < test_cases; ++i)
    {
        int alice{};
        int bob{};
        int charlie{};

        int cost{};

        std::cin >> alice >> bob >> charlie >> cost;

        if ((alice + bob) >= cost || (bob + charlie) >= cost ||
            (alice + charlie) >= cost )
        {
            std::cout << "Yes\n";
        }
        else
        {
            std::cout << "No\n";
        }
    }
}