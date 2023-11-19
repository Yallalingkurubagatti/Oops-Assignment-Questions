#include <iostream>
#include <string>

class Employee {
private:
    std::string name;
    int employeeId;
    double salary;

public:
    void setDetails(std::string n, int id, double s) {
        name = n;
        employeeId = id;
        salary = s;
    }

    void displayDetails() {
        std::cout << "Employee Details:" << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Employee ID: " << employeeId << std::endl;
        std::cout << "Salary: $" << salary << std::endl;
    }
};

int main() {
    Employee emp;

    emp.setDetails("John Doe", 12345, 50000.0);

    emp.displayDetails();

    return 0;
}

