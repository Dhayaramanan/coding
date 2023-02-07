#include <string_view>
#include <string>
#include <iostream>

int calculate_length(std::string string)
{
    int i {0};
    while (i != '\0')
    {
        ++i;
    }
    std::cout << i << '\n';
    return i;
}

int main()
{
    int test_cases{};
    std::cin >> test_cases;

    for (int i{}; i < test_cases; ++i)
    {
        std::string input{};
        std::cin >> input;

        int length {calculate_length(input)};

        std::cout << length << '\n';
        if (length <= 10)
        {
            std::cout << input;
        }
    }

    return 0;
}