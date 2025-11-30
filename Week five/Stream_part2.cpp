#include <iostream>
#include <iomanip> // IOMANIP to format the output
using namespace std;

int main(){
    string item ="Coffee";
    double pi = 3.14159;
    double price = 2.5;
    double tax = 0.20;
    double total = price + tax;

    cout << setw(10) << left << "Item" << setw(10) << right << "Price" << setw(10) << right << "Tax" << setw(10) << right << "Total" << endl;
    cout << setw(10) << left << item << setw(10) << right << fixed << setprecision(2) << price << setw(10) << right << fixed << setprecision(2) << tax << setw(10) << right << fixed << setprecision(2) << total << endl;
    cout << setw(10) << left << "Pi Value" << setw(10) << right << pi << endl;
}
