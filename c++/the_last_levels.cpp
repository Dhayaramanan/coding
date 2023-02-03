#include <iostream>

int main()
{
    int test_cases{};
    std::cin >> test_cases;

    int level_remaining{};
    int minutes_to_complete{};
    int break_time{};

    for (int i{}; i < test_cases; ++i)
    {
        std::cin >> level_remaining >> minutes_to_complete >> break_time;
        
        if (level_remaining <= 3)
        {
            std::cout << (level_remaining * minutes_to_complete) << '\n';
        }
        else if (level_remaining % 3 != 0)
        {
            int total = (level_remaining * minutes_to_complete) +
                        ((level_remaining / 3) * break_time);
            
            std::cout << total << '\n';
        }
        else
        {
            int total = (level_remaining * minutes_to_complete) +
                        ((level_remaining / 3) * break_time) - break_time;
            
            std::cout << total << '\n';
        }
    }

    return 0;
}