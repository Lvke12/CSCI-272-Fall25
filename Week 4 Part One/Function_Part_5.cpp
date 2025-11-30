#include <iostream>
using namespace std;
//First function
double divide(double , double );
int main(){
    double num1 = 5, num2 =7;
    double quotient1 = divide(num1, num2);
    double quotient2 = divide(num2, num1);
    cout << "Quotient: " << quotient1 << " ; "<< quotient2 << endl;
    return 0;
}
double divide(double a, double b){
if (b != 0)
return a / b;
else {
cout << "Error: Division by zero is not allowed." << endl;
return 0;
}
}
//second function
// int main(){
//     double num1 = 5, num2 =7;
//     double quotient1 = divide(num1, num2);
//     double quotient2 = divide(num2, num1);
//     cout << "Quotient: " << quotient1 << " ; "<< quotient2 << endl;
//     return 0;
// }
