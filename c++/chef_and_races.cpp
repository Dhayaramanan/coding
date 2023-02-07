#include <iostream>

int main()
{
    int test_cases{};
    std::cin >> test_cases;

    for (int i{}; i < test_cases; ++i)
    {
        int chef_a{}, chef_b{};
        int rival_a{}, rival_b{};

        std::cin >> chef_a >> chef_b >> rival_a >> rival_b;

        int gold_medal{};

        if (chef_a != rival_a && chef_a != rival_b)
        {
            ++gold_medal;
        }
        if (chef_b != rival_a && chef_b != rival_b)
        {
            ++gold_medal;
        }

        std::cout << gold_medal << '\n';
    }

    return 0;
}