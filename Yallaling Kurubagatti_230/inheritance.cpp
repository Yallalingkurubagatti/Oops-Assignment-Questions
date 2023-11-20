#include <iostream>

class Shape {
public:
    Shape() {
        std::cout << "Shape constructor called." << std::endl;
    }

    void display() {
        std::cout << "This is a shape." << std::endl;
    }
};

class Circle : public Shape {
public:
    Circle(double radius) : radius(radius) {
        std::cout << "Circle constructor called." << std::endl;
    }

    double calculateArea() {
        return 3.14 * radius * radius;
    }

private:
    double radius;
};

int main() {
    Circle myCircle(5.0);

    myCircle.display();
    std::cout << "Area of the circle: " << myCircle.calculateArea() << std::endl;

    return 0;
}

