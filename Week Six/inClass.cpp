#include <iostream>
#include <sstream>

using namespace std;

int main() {
    string input;
    int number;

    cout << "Enter an integer between 0 and 100: ";
    cin >> input;

    istringstream iss(input); // creating a stream from string

    if (iss >> number) {
        if (number >= 0 && number <= 100) {
            cout << "Valid input: " << number << endl;
        } else {
            cout << "Input out of range!" << endl;
        }
    } else {
        cout << "Invalid input (not an integer)!" << endl;
    }
}
