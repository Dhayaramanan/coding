#include <iostream>

double find_minimum(double x, double y)
{
    return (x < y) ? x : y;
}

int main()
{
    int test_cases{};
    std::cin >> test_cases;

    for (int i{}; i < test_cases; ++i)
    {
        int food_supply{};
        int water_supply{};
        int food_supply_needed{};
        int water_supply_needed{};

        int days_to_reach_shore{};

        std::cin >> food_supply >> water_supply >> food_supply_needed >>
                water_supply_needed >> days_to_reach_shore;
        
        double food_supply_last = static_cast<double>(food_supply) / food_supply_needed;
        double water_supply_last = static_cast<double>(water_supply) / water_supply_needed;

        double minimum = find_minimum(food_supply_last, water_supply_last);

        if (minimum > days_to_reach_shore)
        {
            std::cout << "Yes\n";
        }
        else
        {
            std::cout << "No\n";
        }
    }
}