#include <iostream>

int main()
{
    int test_cases{};
    std::cin >> test_cases;

    for (int i{}; i < test_cases; ++i)
    {
        int x{}; //college to chefArina through flight
        int y{}; //chefArina to chefLand through bus
        int z{}; //college to chefLand train

        std::cin >> x >> y >> z;

        if ((x + y) < z)
        {
            std::cout << "PLANEBUS\n";
        }
        else if ((x + y) > z)
        {
            std::cout << "TRAIN\n";
        }
        else
        {
            std::cout << "Equal\n";
        }
    }
    return 0;
}