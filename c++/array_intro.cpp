#include <iostream>

int main() {
    int size{};
    std::cin >> size;

    int array[size];

    for (int i{0}; i < size; ++i) {
        std::cin >> array[i];
    }

    //reverse array
    for (int i{0}; i < size/2; ++i) {
        int temp = array[i];
        array[i] = array[size - i - 1];
        array[size - i - 1] = temp;
    }

    for (int i : array) {
        std::cout << i << ' ';
    }
    std::cout << '\n';

    return 0;
}