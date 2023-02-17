#include <iostream>
#include <cmath>
#include <string_view>

int main()
{
    int testCases{};
    std::cin >> testCases;

    for (int i{}; i < testCases; ++i)
    {
        int seconds{};
        std::cin >> seconds;

        std::string_view north = "North";
        std::string_view east = "East";
        std::string_view west = "West";
        std::string_view south = "South";

        int direction{ (seconds <= 4) ? seconds : std::abs(seconds - 4) };

        switch (direction)
        {
            case 0:
            case 4:
                std::cout << north << '\n';
                break;
            
            case 1:
                std::cout << east << '\n';
                break;
            
            case 2:
                std::cout << south << '\n';
                break;
            
            case 3:
                std::cout << west << '\n';
                break;
            
            default:
                break;
        }
    }

    return 0;
}