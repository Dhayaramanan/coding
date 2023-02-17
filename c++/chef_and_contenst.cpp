#include <iostream>

int main()
{
    int test_cases{};
    std::cin >> test_cases;

    for (int i{}; i < test_cases; ++i)
    {
        int chef_solved{};
        int chef_wrong_submissions{};

        int chefina_solved{};
        int chefina_wrong_submissions{};

        std::cin >> chef_solved >> chefina_solved >> chef_wrong_submissions
                >> chefina_wrong_submissions;
        
        int penalty_time_of_chef{chef_solved};
        int penalty_time_of_chefina{chefina_solved};

        for (int j{1}; j <= chef_wrong_submissions; ++j)
        {
            penalty_time_of_chef += 10;
        }
        for (int k{1}; k <= chefina_wrong_submissions; ++k)
        {
            penalty_time_of_chefina += 10;
        }

        if (penalty_time_of_chef < penalty_time_of_chefina)
        {
            std::cout << "Chef\n";
        }
        else if (penalty_time_of_chef > penalty_time_of_chefina)
        {
            std::cout << "Chefina\n";
        }
        else
        {
            std::cout << "Draw\n";
        }
    }

    return 0;
}