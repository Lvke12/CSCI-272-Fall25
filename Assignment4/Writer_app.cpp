// This file is using ios::app (appends)
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){
    // ofstream constructor will open the clients.txt file to append
    ofstream outClientFile("clients.txt", ios::app);

    // if the file doesn't or couldn't be opened, it will exit program 
    if (!outClientFile) {
        cerr << "File could not be opened." << endl;
        return 1;
    }

    cout << "Enter account, name, and balance to append.\n"
         << "Enter end-of-file to end input.\n? ";
    //we are using the same variables as Writer_out.cpp
    int account;
    string name;
    double balance;

    // In this loop it'll read from user then will append 
    while (cin >> account >> name >> balance){
        outClientFile << account << ' ' << name << ' ' << balance << endl;
        cout << "? ";
    }
}
