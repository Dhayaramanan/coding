#include <iostream>

int main()
{
    int test_cases{};
    std::cin >> test_cases;

    for (int i{}; i < test_cases; ++i)
    {
        int percentage{};
        std::cin >> percentage;

        if (percentage >= 80)
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