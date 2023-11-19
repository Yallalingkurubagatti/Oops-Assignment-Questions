#include <iostream>
#include <cmath>

class PrimeChecker {
private:
    int number;

public:
    PrimeChecker(int n) {
        number = n;
    }

    bool isPrime() {
        if (number <= 1) {
            return false;
        }
        if (number <= 3) {
            return true;
        }
        if (number % 2 == 0 || number % 3 == 0) {
            return false;
        }

        for (int i = 5; i * i <= number; i += 6) {
            if (number % i == 0 || number % (i + 2) == 0) {
                return false;
            }
        }

        return true;
    }
};

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    PrimeChecker prime(num);

    if (prime.isPrime()) {
        std::cout << num << " is a prime number." << std::endl;
    } else {
        std::cout << num << " is not a prime number." << std::endl;
    }

    return 0;
}

