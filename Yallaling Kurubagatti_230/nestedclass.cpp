#include <iostream>

class OuterClass {
public:
    OuterClass(int value) : outerMember(value) {
        std::cout << "OuterClass constructor called with value: " << value << std::endl;
    }

    void displayOuter() {
        std::cout << "OuterClass member: " << outerMember << std::endl;
    }

    class NestedClass {
    public:
        NestedClass(int value) : nestedMember(value) {
            std::cout << "NestedClass constructor called with value: " << value << std::endl;
        }

        void displayNested() {
            std::cout << "NestedClass member: " << nestedMember << std::endl;
        }

    private:
        int nestedMember;
    };

private:
    int outerMember;
};

int main() {
    OuterClass outerObject(42);

    outerObject.displayOuter();

    OuterClass::NestedClass nestedObject(24);

    nestedObject.displayNested();

    return 0;
}

