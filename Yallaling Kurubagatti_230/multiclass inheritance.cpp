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

class Color {
public:
    Color() {
        std::cout << "Color constructor called." << std::endl;
    }

    void setColor(std::string color) {
        this->color = color;
    }

    void displayColor() {
        std::cout << "Color: " << color << std::endl;
    }

private:
    std::string color;
};

class ColoredShape : public Shape, public Color {
public:
    ColoredShape(double radius, std::string color) {
        std::cout << "ColoredShape constructor called." << std::endl;
        this->radius = radius;
        setColor(color);
    }

    double calculateArea() {
        return 3.14 * radius * radius;
    }

private:
    double radius;
};

int main() {
    ColoredShape myColoredShape(5.0, "Red");

    myColoredShape.display();
    myColoredShape.displayColor();
    std::cout << "Area of the colored shape: " << myColoredShape.calculateArea() << std::endl;

    return 0;
}

