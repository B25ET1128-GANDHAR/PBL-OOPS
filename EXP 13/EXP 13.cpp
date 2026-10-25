
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    char ch;

    // Open the source file for reading
    ifstream source("source.txt");

    // Check whether the source file opened successfully
    if (!source) {
        cout << "Error: Cannot open source file!" << endl;
        return 1;
    }

    // Open the destination file for writing
    ofstream destination("destination.txt");

    // Check whether the destination file opened successfully
    if (!destination) {
        cout << "Error: Cannot create destination file!" << endl;
        return 1;
    }

    // Copy contents character by character
    while (source.get(ch)) {
        destination.put(ch);
    }

    // Close both files
    source.close();
    destination.close();

    // Display success message
    cout << "File contents copied successfully!" << endl;

    return 0;
}


