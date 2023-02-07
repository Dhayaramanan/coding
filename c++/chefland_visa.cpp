#include <iostream>

int main()
{
    int test_cases{};
    std::cin >> test_cases;

    for (int i{}; i < test_cases; ++i)
    {
        //basic conditions
        int x1{}; //minimum problems that need to be solved
        int y1{}; //minimum rating in codechef
        int z1{}; //last submission months before

        //conditions met by chef
        int x2{};
        int y2{};
        int z2{};

        std::cin >> x1 >> x2 >> y1 >> y2 >> z1 >> z2;

        if ((x2 >= x1) && (y2 >= y1) && (z2 <= z1))
        {
            std::cout << "Yes\n";
        }
        else
        {
            std::cout << "No\n";
        }
    }

    return 0;
}