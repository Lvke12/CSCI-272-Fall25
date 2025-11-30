#include <iostream>
#include <sstream>

using namespace std;

int main() {
    string input;
    int number;

    cout << "Enter an integer: ";
    cin >> input;

    istringstream iss(input);

if (iss >> number) { 
if (number >= 0 && number <= 100) {
cout << "Valid input: " << number << endl;
} else {
cout << "Input out of range." << endl;
}
} else {

    cout << "Invalid input. Please enter an integer." << endl;
}
return 0;
}
