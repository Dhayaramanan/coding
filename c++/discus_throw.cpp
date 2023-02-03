#include <iostream>

int find_max(int a, int b, int c)
{
    int max = a;
    if (b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }

    return max;
}

int main()
{
    int test_cases{};
    std::cin >> test_cases;

    int throw1{};
    int throw2{};
    int throw3{};

    for (int i{}; i < test_cases; ++i)
    {
        std::cin >> throw1 >> throw2 >> throw3;
        //final score
        std::cout << find_max(throw1, throw2, throw3) << '\n';
    }

    return 0;
}
