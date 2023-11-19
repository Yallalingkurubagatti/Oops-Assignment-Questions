#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int rollNumber;
    double marks;

public:
    void setDetails(std::string n, int roll, double m) {
        name = n;
        rollNumber = roll;
        marks = m;
    }

    void displayDetails() {
        std::cout << "Student Details:" << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Roll Number: " << rollNumber << std::endl;
        std::cout << "Marks: " << marks << std::endl;
    }
};

int main() {
    Student student;

    student.setDetails("Alice Smith", 101, 95.5);

    student.displayDetails();

    return 0;
}

