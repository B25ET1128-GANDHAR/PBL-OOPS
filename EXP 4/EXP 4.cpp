#include <iostream>
using namespace std;

class Complex {
    float r, i;

public:
    void get() {
        cout << "Enter real part: ";
        cin >> r;

        cout << "Enter imaginary part: ";
        cin >> i;
    }

    void add(Complex c) {
        cout << "Addition = " << r + c.r << " + "
             << i + c.i << "i\n";
    }

    void sub(Complex c) {
        cout << "Subtraction = " << r - c.r << " + "
             << i - c.i << "i\n";
    }

    void mul(Complex c) {
        cout << "Multiplication = "
             << r * c.r - i * c.i << " + "
             << r * c.i + i * c.r << "i\n";
    }

    void conjugate() {
        cout << "Conjugate = " << r << " - " << i << "i\n";
    }
};

int main() {
    Complex a, b;

    cout << "Enter first complex number:\n";
    a.get();

    cout << "\nEnter second complex number:\n";
    b.get();

    cout << "\n";
    a.add(b);
    a.sub(b);
    a.mul(b);
    a.conjugate();

    return 0;
}
