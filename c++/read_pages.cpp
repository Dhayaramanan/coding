#include <iostream>

int main()
{
    int test_cases{};
    std::cin >> test_cases;

    int n{};
    int x{};
    int y{};
    
    for (int i{}; i < test_cases; ++i)
    {
        std::cin >> n >> x >> y;

        if ((x * y) >= n)
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
