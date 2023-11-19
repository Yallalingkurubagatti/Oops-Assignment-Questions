#include <iostream>

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    int subtract(int a, int b) {
        return a - b;
    }

    int multiply(int a, int b) {
        return a * b;
    }

    double divide(int a, int b) {
        if (b != 0) {
            return static_cast<double>(a) / b;
        } else {
            std::cout << "Error: Cannot divide by zero." << std::endl;
            return 0.0;
        }
    }
};

int main() {
    Calculator myCalculator;

    int resultAdd = myCalculator.add(5, 3);
    int resultSubtract = myCalculator.subtract(8, 4);
    int resultMultiply = myCalculator.multiply(6, 2);
    double resultDivide = myCalculator.divide(9, 3);

    std::cout << "Addition Result: " << resultAdd << std::endl;
    std::cout << "Subtraction Result: " << resultSubtract << std::endl;
    std::cout << "Multiplication Result: " << resultMultiply << std::endl;
    std::cout << "Division Result: " << resultDivide << std::endl;

    return 0;
}

