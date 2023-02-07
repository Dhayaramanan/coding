#include <iostream>

int main()
{
    int test_cases{};
    std::cin >> test_cases;

    char guess_string[5]{};
    char hidden_string[5]{};
    char correct[5]{};

    for (int i{}; i < test_cases; ++i)
    {

        std::cin >> hidden_string;
        std::cin >> guess_string;


        for (int j{}; j < 5; ++j)
        {
            if (guess_string[j] == hidden_string[j])
            {
                correct[j] = 'G';
            }
            else
            {
                correct[j] = 'B';
            }
        }

        std::cout << correct << '\n';
    }

    std::cout << correct << '\n';

    return 0;
}