#include <iostream>

class MyClass {
public:
    void displayMessage();
};

void MyClass::displayMessage() {
    std::cout << "Hello from MyClass!" << std::endl;
}

int main() {
    MyClass myObject;

    myObject.displayMessage();

    return 0;
}
