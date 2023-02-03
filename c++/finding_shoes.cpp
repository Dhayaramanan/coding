#include <iostream>
#include <cmath>

int main()
{
  int test_cases{};
  std::cin >> test_cases;

  int n {}; //number of pairs
  int m {}; //number of left shoes

  for (int i{}; i < test_cases; ++i)
  {
    std::cin >> n >> m;

    int shoes = n * 2;

    std::cout << std::abs(shoes - m) << '\n';
  }

  return 0;
}
