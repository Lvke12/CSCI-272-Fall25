#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main(){
    int number;

    cout << "Enter a character: " << endl;
    char ch = cin.get(); //reads one char, even a space
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); //ignores everything in the buffer until a newline is found
// "ignore" the bufffer and all the characters in it until a newline is found like when you press enter

    cout << "You entered: " << ch << endl;

    cout<< "Enter your full name: " << endl;
    string fullName;
    getline(cin, fullName); //getline reads an entire line including whitespace
    cout << "Hello, " << fullName << "!\n"<< endl;










}
