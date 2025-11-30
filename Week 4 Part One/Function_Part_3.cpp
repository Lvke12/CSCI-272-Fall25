#include <iostream>
using namespace std;
//First function 
double divide(){
    double num1, num2;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
//loop 
    if(num2 !=0)
    return num1/num2;
    else{
        cout<<"Error: Division by zero is not allowed."<<endl;
        return 0; 
    }
}
//second function
int main(){
    //calling function one
    double quotient1 = divide();

    cout<<"Quotient: " << quotient1 <<endl;
    return 0;   
}
