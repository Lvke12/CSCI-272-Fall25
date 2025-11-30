#include <iostream>
using namespace std;

int main(){
    double num1, num2;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;

    //We will be divide
    double quotient;
    
    //We do a loop
    if(num2 !=0)
        quotient = num1 / num2;
    else{
        cout<<"Error: Division by zero is not allowed."<<endl;
        quotient = 0; 
    }

    //Show the results
    cout<<"The quotient is: "<<quotient<<endl;
    return 0;

}
