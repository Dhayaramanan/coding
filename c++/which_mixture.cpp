#include <iostream>

int main()
{
    int test_cases{};
    std::cin >> test_cases;

    for (int i{}; i < test_cases; ++i)
    {
        int solid{};
        int liquid{};

        std::cin >> solid >> liquid;

        if (solid > 0 && liquid > 0)
        {
            std::cout << "Solution\n";
        }
        else if (liquid == 0)
        {
            std::cout << "Solid\n";
        }
        else
        {
            std::cout << "Liquid\n";
        }
    }

    return 0;
}