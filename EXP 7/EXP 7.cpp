#include <iostream>
#include <cstring>
using namespace std;

// Class to store a single word
class String {
private:
    char word[50];  // Character array to store the word

public:
    // Constructor to accept and initialize the word
    String() {
        cout << "Enter a single word: ";
        cin >> word;
        cout << "Constructor is called." << endl;
    }

    // Function to display the word
    void display() {
        cout << "The entered word is: " << word << endl;
    }

    // Destructor to display a message when the object is destroyed
    ~String() {
        cout << "Destructor is called." << endl;
    }
};

// Main function
int main() {
    // Creating an object of the String class
    String s;

    // Displaying the stored word
    s.display();

    return 0;  // Program ends and destructor is called
}

