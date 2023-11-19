#include <iostream>

class PrimeChecker {
public:
    bool isPrime(int num) {
        if (num <= 1) {
            return false;
        }

        for (int i = 2; i * i <= num; ++i) {
            if (num % i == 0) {
                return false;
        }

        return true;
    }
};

int main() {

    PrimeChecker primeChecker;
    int number1 = 7;
    int number2 = 12;


    if (primeChecker.isPrime(number1)) {
        std::cout << number1 << " is a prime number." << std::endl;
    } else {
        std::cout << number1 << " is not a prime number." << std::endl;
    }


    if (primeChecker.isPrime(number2)) {
        std::cout << number2 << " is a prime number." << std::endl;
    } else {
        std::cout << number2 << " is not a prime number." << std::endl;
    }

    return 0;
}

