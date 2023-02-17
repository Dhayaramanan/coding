#include <iostream>

int calculate_position(int s)
{
    int position{};

    for (int j{1}; j <= s; ++j)
    {
        if (j % 2 != 0)
        {
            position += 3;
        }
        else
        {
            position -= 1;
        }
    }

    return position;
}

int main()
{
    int test_cases{};
    std::cin >> test_cases;

    for (int i{0}; i < test_cases; ++i)
    {
        int seconds{};
        std::cin >> seconds;

        int position{ calculate_position(seconds) };

        std::cout << position << '\n';
    }

    return 0;
}