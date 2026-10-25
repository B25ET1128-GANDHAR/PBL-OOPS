#include <iostream>
using namespace std;

// Base class to store employee basic information
class Employee {
protected:
    int empId;
    string name;
    string designation;

public:
    // Function to accept basic information
    void getBasicInfo() {
        cout << "Enter Employee ID: ";
        cin >> empId;

        cout << "Enter Employee Name: ";
        cin >> name;

        cout << "Enter Designation: ";
        cin >> designation;
    }
};

// Base class to store employee contact information
class Contact {
protected:
    string phone;
    string email;
    string address;

public:
    // Function to accept contact information
    void getContactInfo() {
        cout << "Enter Phone Number: ";
        cin >> phone;

        cout << "Enter Email: ";
        cin >> email;

        cout << "Enter Address: ";
        cin >> address;
    }
};

// Derived class inheriting from both Employee and Contact
class EmployeeCard : public Employee, public Contact {
public:
    // Function to display the complete employee contact card
    void displayCard() {
        cout << "\n--- Employee Contact Card ---" << endl;
        cout << "Employee ID : " << empId << endl;
        cout << "Name        : " << name << endl;
        cout << "Designation : " << designation << endl;
        cout << "Phone       : " << phone << endl;
        cout << "Email       : " << email << endl;
        cout << "Address     : " << address << endl;
    }
};

// Main function
int main() {
    // Creating an object of the derived class
    EmployeeCard e;

    // Accepting employee information
    e.getBasicInfo();
    e.getContactInfo();

    // Displaying the complete contact card
    e.displayCard();

    return 0;  // End of program
}



