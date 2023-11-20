#include <iostream>

class MyClass {
public:
    static int staticVariable;
    MyClass(int value) : memberVariable(value) {
        staticVariable++;
    }

    void displayValues() {
        std::cout << "Member variable: " << memberVariable << std::endl;
        std::cout << "Static variable: " << staticVariable << std::endl;
    }

    static void displayStaticVariable() {
        std::cout << "Static variable (from static function): " << staticVariable << std::endl;
    }

private:
    int memberVariable;
};

int MyClass::staticVariable = 0;

int main() {
    MyClass obj1(10);
    MyClass obj2(20);

    std::cout << "Object 1:" << std::endl;
    obj1.displayValues();

    std::cout << "\nObject 2:" << std::endl;
    obj2.displayValues();

    MyClass::displayStaticVariable();

    return 0;
}
