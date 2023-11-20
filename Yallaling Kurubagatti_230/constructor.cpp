#include <iostream>

class MyClass {
public:
    // Constructor with parameters
    MyClass(int value1, int value2) {
        memberVariable1 = value1;
        memberVariable2 = value2;

        std::cout << "Constructor called with values " << value1 << " and " << value2 << std::endl;
    }

    void displayValues() {
        std::cout << "Values: " << memberVariable1 << " and " << memberVariable2 << std::endl;
    }

private:
    int memberVariable1;
    int memberVariable2;
};

int main() {
    MyClass myObject(10, 20);

    myObject.displayValues();

    return 0;
}

