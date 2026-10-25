#include <iostream>
using namespace std;

// Class to represent a complex number
class Complex {
private:
    float real;       // Stores the real part
    float imaginary;  // Stores the imaginary part

public:
    // Constructor to initialize the complex number
    Complex(float r = 0, float i = 0) {
        real = r;
        imaginary = i;
    }

    // Overloading the != operator
    // Returns true if the two complex numbers are different
    bool operator!=(const Complex& c) {
        return (real != c.real || imaginary != c.imaginary);
    }

    // Function to display the complex number
    void display() {
        cout << real << " + " << imaginary << "i";
    }
};

// Main function
int main() {
    // Creating two complex number objects
    Complex c1(3, 4);
    Complex c2(5, 4);

    // Displaying the complex numbers
    cout << "First complex number: ";
    c1.display();

    cout << "\nSecond complex number: ";
    c2.display();

    // Checking whether the complex numbers are different
    if (c1 != c2) {
        cout << "\n\nThe complex numbers are different." << endl;
    } else {
        cout << "\n\nThe complex numbers are equal." << endl;
    }

    return 0;  // End of program
}
