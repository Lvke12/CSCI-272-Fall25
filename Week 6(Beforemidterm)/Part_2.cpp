#include <iostream>
#include <sstream>

using namespace std;
int main(){
    string input = "100 3.5";
    istringstream iss(input); //stream containing 100 & 3.5

    int quantity; //interger variable
    double price; //double 0.00

    iss >> quantity >> price;

    cout << "Total quantity: " << (quantity * price) << endl;

    cout<< quantity <<endl;
    cout<< price <<endl;


    return 0;

}
