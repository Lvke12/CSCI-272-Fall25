#include <iostream>
#include <sstream>
#include <string>

using namespace std;

// Function prototype
bool isValidPhoneNumber(const string& input);

int main() {
    string input;

    do {
        cout << "Enter a U.S. phone #: e.g., (123) 456-7890: ";
        getline(cin, input);

        if (!isValidPhoneNumber(input)) {
            cout << "Invalid input! Please try again.\n" << endl;
        }
    } while (!isValidPhoneNumber(input));

    cout << "Valid Phone Number: " << input << endl;

    return 0;
}

// Function definition
bool isValidPhoneNumber(const string& input) {
    istringstream iss(input);
    char openParen, closeParen, dash, space;
    int areacode, firstPart, secondPart;

    // Parse format: (123) 456-7890
    if (iss >> openParen >> areacode >> closeParen >> space >> firstPart >> dash >> secondPart) {
        if (openParen == '(' && closeParen == ')' && space == ' ' && dash == '-' &&
            areacode >= 100 && areacode <= 999 &&
            firstPart >= 100 && firstPart <= 999 &&
            secondPart >= 1000 && secondPart <= 9999) {
            return true;
        }
    }
    return false;
}
