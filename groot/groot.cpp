#include <iostream>

int main() {
    int num = 0;

    std::cout << "Enter a number: ";
    std::cin >> num;

    if (num < 0) {
        std::cout << "Negative numbers are not permitted!" << std::endl;

        return 1;
    }

    std::cout << "Its square root is " << std::sqrt(num) << std::endl;

    return 0;
}