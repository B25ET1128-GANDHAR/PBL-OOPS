
#include <iostream>
using namespace std;

// Class template to store and display two values
template <class T>
class Sample {
private:
    T a, b;

public:
    // Constructor to initialize values
    Sample(T x, T y) {
        a = x;
        b = y;
    }

    // Function to display the values
    void display() {
        cout << "First value  = " << a << endl;
        cout << "Second value = " << b << endl;
    }
};

// Function template to find the maximum of two values
template <class T>
T maximum(T a, T b) {
    return (a > b) ? a : b;
}

// Main function
int main() {
    int x, y;

    // Accept two integers from the user
    cout << "Enter two integer values: ";
    cin >> x >> y;

    // Create an object of the class template
    Sample<int> s(x, y);

    // Display values using the class template
    cout << "\n--- Class Template Output ---" << endl;
    s.display();

    // Find maximum using the function template
    cout << "\n--- Function Template Output ---" << endl;
    cout << "Maximum value = " << maximum(x, y) << endl;

    return 0;  // End of program
}


