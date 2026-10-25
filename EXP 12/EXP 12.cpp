#include <iostream>
using namespace std;

// Define a user-defined namespace
namespace MyNamespace {
    int num = 100;

    // Function inside the namespace
    void display() {
        cout << "Welcome to MyNamespace!" << endl;
        cout << "Number = " << num << endl;
    }
}

// Main function
int main() {
    // Access the namespace variable
    cout << "Accessing namespace variable:" << endl;
    cout << "Number = " << MyNamespace::num << endl;

    // Call the function using the scope resolution operator
    cout << "\nCalling namespace function:" << endl;
    MyNamespace::display();

    return 0;  // End of program
}

