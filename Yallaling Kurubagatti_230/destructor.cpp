#include <iostream>

class MyClass {
public:
    // Constructor
    MyClass() {
        std::cout << "Constructor called!" << std::endl;
    }

    // Destructor
    ~MyClass() {
        std::cout << "Destructor called!" << std::endl;
        // Clean-up code can go here
    }

    // Member function
    void displayMessage() {
        std::cout << "Hello from MyClass!" << std::endl;
    }
};

int main() {

    MyClass myObject;
    myObject.displayMessage();
    return 0;
}

