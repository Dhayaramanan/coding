#include <iostream>

int main()
{
    char color1{}; //eye color of parent1
    char color2{}; //eye color of parent2

    std::cin >> color1 >> color2;

    if (color1 == 'R' || color2 == 'R')
    {
        std::cout << 'R' << '\n';
    }
    else if (color1 == 'B' || color2 == 'B')
    {
        std::cout << 'B' << '\n';
    }
    else
    {
        std::cout << 'G' << '\n';
    }

    return 0;
}