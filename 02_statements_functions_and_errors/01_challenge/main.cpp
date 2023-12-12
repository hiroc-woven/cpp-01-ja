#include <iostream>

int main() {
    float input {};
    std::cin >> input;

    if (input > 0) {
        std::cout << "正" << std::endl;
    } else if (input < 0) {
        std::cout << "負" << std::endl;
    } else {
        std::cout << "ゼロ" << std::endl;
    }
}