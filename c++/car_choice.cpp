#include <iostream>

int main()
{
    int test_cases{};
    std::cin >> test_cases;

    for (int i{}; i < test_cases; ++i)
    {
        int diesel_car_economy{};
        int petrol_car_economy{};
        
        int diesel_rate{}; //per litre
        int petrol_rate{}; //per litre

        std::cin >> diesel_car_economy >> petrol_car_economy >> diesel_rate >> petrol_rate;

        double diesel_rate_per_km = static_cast<double>(diesel_rate) / diesel_car_economy;
        double petrol_rate_per_km = static_cast<double>(petrol_rate) / petrol_car_economy;

        if (diesel_rate_per_km < petrol_rate_per_km)
        {
            std::cout << -1 << '\n';
        }
        else if (petrol_rate_per_km < diesel_rate_per_km)
        {
            std::cout << 1 << '\n';
        }
        else
        {
            std::cout << 0 << '\n';
        }
    }

    return 0;
}