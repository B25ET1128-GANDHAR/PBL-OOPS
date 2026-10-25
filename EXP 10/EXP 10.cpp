
#include <iostream>
using namespace std;

int main() {
    int choice;
    double a, b;

    // Display calculator menu
    cout << "----- Calculator Menu -----" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;

    // Accept menu choice
    cout << "Enter your choice: ";
    cin >> choice;

    try {
        // Check whether the menu choice is valid
        if (choice < 1 || choice > 4) {
            throw choice;
        }

        // Accept two numbers
        cout << "Enter two numbers: ";
        cin >> a >> b;

        // Perform the selected operation
        switch (choice) {
            case 1:
                cout << "Result = " << a + b << endl;
                break;

            case 2:
                cout << "Result = " << a - b << endl;
                break;

            case 3:
                cout << "Result = " << a * b << endl;
                break;

            case 4:
                // Check for division by zero
                if (b == 0) {
                    throw "Division by zero is not allowed!";
                }
                cout << "Result = " << a / b << endl;
                break;
        }
    }

    // Handle invalid menu choices
    catch (int ch) {
        cout << "Exception caught: Invalid menu choice "
             << ch << "!" << endl;
    }

    // Handle division by zero
    catch (const char* message) {
        cout << "Exception caught: " << message << endl;
    }

    return 0;
}


