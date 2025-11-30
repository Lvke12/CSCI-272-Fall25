//File using ios::out (overwrite)
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
    // ofstream constructor opens the clients.txt file
    ofstream outClientFile("clients.txt", ios::out);

    // if statement to exit program if ofstream could not open file
    if (!outClientFile){
        cerr << "File could not be opened." << endl;
        return 1;
    }

    cout << "Enter account, name, and balance. \n"
         << "Enter end-of-file to end input. \n? ";

         //declare the following variables
    int account;
    string name;
    double balance;

    // read from the user then write to file
    while (cin >> account >> name >> balance){
        outClientFile << account << ' ' << name << ' ' << balance << endl;
        cout << "? ";
    }
}
