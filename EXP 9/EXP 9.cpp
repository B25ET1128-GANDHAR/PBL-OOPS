#include <iostream>
#include <string>
using namespace std;

// Base class
class Employee {
protected:
    string name;
    double basicSalary;

public:
    // Function to accept employee details
    void getDetails() {
        cout << "Enter employee name: ";
        getline(cin >> ws, name);

        cout << "Enter basic salary: ";
        cin >> basicSalary;
    }

    // Virtual function to calculate salary
    virtual double calculateSalary() {
        return basicSalary;
    }

    // Virtual function to display employee details
    virtual void display() {
        cout << "Employee Name: " << name << endl;
        cout << "Basic Salary: Rs. " << basicSalary << endl;
        cout << "Total Salary: Rs. " << calculateSalary() << endl;
    }

    // Virtual destructor
    virtual ~Employee() {}
};

// Derived class Manager
class Manager : public Employee {
public:
    // Calculate manager salary with allowance
    double calculateSalary() override {
        return basicSalary + 20000;
    }

    // Display manager details
    void display() override {
        cout << "\n--- Manager Details ---" << endl;
        Employee::display();
    }
};

// Derived class Developer
class Developer : public Employee {
public:
    // Calculate developer salary with allowance
    double calculateSalary() override {
        return basicSalary + 10000;
    }

    // Display developer details
    void display() override {
        cout << "\n--- Developer Details ---" << endl;
        Employee::display();
    }
};

// Main function
int main() {
    // Create objects of derived classes
    Manager m;
    Developer d;

    // Base class pointer
    Employee* emp;

    // Accept and display Manager details
    cout << "Enter Manager Details:" << endl;
    m.getDetails();
    emp = &m;
    emp->display();

    // Accept and display Developer details
    cout << "\nEnter Developer Details:" << endl;
    d.getDetails();
    emp = &d;
    emp->display();

    return 0;
}





