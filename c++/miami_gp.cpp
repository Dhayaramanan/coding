#include <iostream>

int main()
{
    int test_cases{};
    std::cin >> test_cases;

    int x{}; //fastest finish time
    int y{}; //contenstent finish time

    for (int i{}; i < test_cases; ++i)
    {
        std::cin >> x >> y;

        if (y < (x * 1.07))
        {
            std::cout << "YES\n";
        }
        else
        {
            std::cout << "NO\n";
        }
    }
    
    return 0;
}
