#include <iostream>

int main() {
  int testCases{};
  std::cin >> testCases;

  for (int i{0}; i < testCases; ++i) {
    int x{};
    std::cin >> x;

    int distanceWalked = x * 10;

    std::cout << distanceWalked << '\n';
  }

  return 0;
}
