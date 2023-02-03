#include <iostream>

int main()
{
    int a{}; //first topic
    int b{}; //second topic
    int c{}; //third topic
    int x{}; //random topic

    std::cin >> a >> b >> c >> x;

    if (x == a || x == b || x == c)
    {
        std::cout << "Yes\n";
    }
    else
    {
        std::cout << "No\n";
    }

    return 0;
}
