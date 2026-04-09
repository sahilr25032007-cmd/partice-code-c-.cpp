 write a program to domonstrate division by zero exception
#include <iostream>
#include <stdexcept> // for runtime_error

int main() {
    int numerator = 10;
    int denominator = 0;

    try {
        if (denominator == 0) {
            // Manually throw an exception since C++ does not automatically throw one
            throw std::runtime_error("Division by zero is not allowed!");
        }
        int result = numerator / denominator;
        std::cout << "Result: " << result << std::endl;
    } catch (const std::runtime_error& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}