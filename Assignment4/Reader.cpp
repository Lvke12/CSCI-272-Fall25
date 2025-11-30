// Reading from a sequential text file
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    // ifstream constructor opens file
    ifstream inClientFile("clients.txt", ios::in);

    // exit program if ifstream could not open file
    if (!inClientFile) {
        cerr << "File could not be opened." << endl;
        return 1;
    }

    cout << left << setw(10) << "Account" << setw(13) << "Name" 
         << right << setw(10) << "Balance" << endl;

    int account;
    string name;
    double balance;

    // display each record
    while (inClientFile >> account >> name >> balance){
        cout << left << setw(10) << account << setw(13) << name 
             << right << setw(10) << fixed << setprecision(2) << balance << endl;
    }
}
