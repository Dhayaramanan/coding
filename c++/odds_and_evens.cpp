#include <iostream>

int main()
{
    int test_cases{};
    std::cin >> test_cases;

    for (int i{}; i < test_cases; ++i)
    {
        int alice{};
        int bob{};

        std::cin >> alice >> bob;

        if ((alice + bob) % 2 != 0)
        {
            std::cout << "Alice\n";
        }
        else
        {
            std::cout << "Bob\n";
        }
    }

    return 0;
}