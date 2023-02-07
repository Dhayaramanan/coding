#include <iostream>

int main()
{
    int test_cases{};
    std::cin >> test_cases;

    for (int i{}; i < test_cases; ++i)
    {
        char id{};
        std::cin >> id;

        switch (id)
        {
            case 'B':
            case 'b':
                std::cout << "BattleShip\n";
                break;
            
            case 'C':
            case 'c':
                std::cout << "Cruiser\n";
                break;
            
            case 'D':
            case 'd':
                std::cout << "Destroyer\n";
                break;
            
            case 'F':
            case 'f':
                std::cout << "Frigate\n";
                break;
            
            default:
                break;
        }
    }

    return 0;
}