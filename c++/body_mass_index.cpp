#include <iostream>

int main()
{
    int test_cases{};
    std::cin >> test_cases;

    for (int i{}; i < test_cases; ++i)
    {
        double mass;
        double height;

        std::cin >> mass >> height;

        double bmi = mass / (height * height);

        //underweight
        if (bmi <= 18)
        {
            std::cout << 1 << '\n';
        }
        //normal weight
        else if (bmi > 18 && bmi <= 24)
        {
            std::cout << 2 << '\n';
        }
        //overweight
        else if (bmi > 24 && bmi <= 29)
        {
            std::cout << 3 << '\n';
        }
        //obese
        else
        {
            std::cout << 4 << '\n';
        }
    }

    return 0;
}