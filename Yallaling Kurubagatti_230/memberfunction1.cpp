#include <iostream>

class Car {
private:
    std::string model;
    int year;

public:
    // Constructor
    Car(std::string m, int y) : model(m), year(y) {}

    // Member function
    void start() {
        std::cout << "The " << year << " " << model << " is now running." << std::endl;
    }
};

int main() {
    // Create an instance of the Car class
    Car myCar("Toyota Camry", 2022);

    // Call the member function
    myCar.start();

    return 0;
}

